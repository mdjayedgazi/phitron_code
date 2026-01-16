from reportlab.platypus import SimpleDocTemplate, Paragraph, Table, TableStyle
from reportlab.lib.styles import getSampleStyleSheet, ParagraphStyle
from reportlab.lib.pagesizes import A4
from reportlab.lib import colors
import os

# Folder and file path
folder = r"D:\PHITRON\DSA\STL"
os.makedirs(folder, exist_ok=True)
file_path = os.path.join(folder, "STL_Complete_Function_Directory_FINAL.pdf")

# PDF document setup
doc = SimpleDocTemplate(file_path, pagesize=A4)
styles = getSampleStyleSheet()

title = ParagraphStyle("Title", parent=styles["Title"], spaceAfter=20)
h1 = ParagraphStyle("H1", parent=styles["Heading1"], spaceBefore=14, spaceAfter=10)
body = ParagraphStyle("Body", parent=styles["BodyText"], spaceAfter=6)

# Function to create table
def make_table(data):
    t = Table(data, colWidths=[170, 240, 120])
    t.setStyle(TableStyle([
        ("GRID", (0,0), (-1,-1), 1, colors.black),
        ("BACKGROUND", (0,0), (-1,0), colors.lightgrey),
        ("FONT", (0,0), (-1,0), "Helvetica-Bold"),
        ("VALIGN", (0,0), (-1,-1), "TOP"),
        ("LEFTPADDING", (0,0), (-1,-1), 6),
        ("RIGHTPADDING", (0,0), (-1,-1), 6),
        ("TOPPADDING", (0,0), (-1,-1), 6),
        ("BOTTOMPADDING", (0,0), (-1,-1), 6),
    ]))
    return t

# Content
content = []
content.append(Paragraph("C++ STL – Complete Function Directory (Final Edition)", title))
content.append(Paragraph(
    "This document is a complete reference of the C++ Standard Template Library (STL). "
    "All major containers, adapters, and algorithms are included in a strict table-based format "
    "with function name, description, and time complexity.",
    body
))

sections = [
    ("vector (<vector>)", [
        ["push_back(x)","Insert element at end","O(1) amortized"],
        ["pop_back()","Remove last element","O(1)"],
        ["insert(pos,x)","Insert at position","O(N)"],
        ["erase(pos)","Erase element","O(N)"],
        ["size()","Number of elements","O(1)"],
        ["clear()","Remove all elements","O(N)"],
        ["empty()","Check if empty","O(1)"],
        ["front()","First element","O(1)"],
        ["back()","Last element","O(1)"],
    ]),
    ("array (<array>)", [
        ["size()","Number of elements","O(1)"],
        ["fill(x)","Fill with value","O(N)"],
        ["at(i)","Access with bounds check","O(1)"],
        ["front()","First element","O(1)"],
        ["back()","Last element","O(1)"],
    ]),
    ("list (<list>)", [
        ["push_back(x)","Insert at end","O(1)"],
        ["push_front(x)","Insert at front","O(1)"],
        ["pop_back()","Remove last","O(1)"],
        ["pop_front()","Remove first","O(1)"],
        ["insert(pos,x)","Insert at position","O(1)"],
        ["erase(pos)","Erase at position","O(1)"],
    ]),
    ("deque (<deque>)", [
        ["push_back(x)","Insert at end","O(1)"],
        ["push_front(x)","Insert at front","O(1)"],
        ["pop_back()","Remove last","O(1)"],
        ["pop_front()","Remove first","O(1)"],
        ["at(i)","Access element","O(1)"],
    ]),
    ("stack (<stack>)", [
        ["push(x)","Insert element","O(1)"],
        ["pop()","Remove top","O(1)"],
        ["top()","Access top","O(1)"],
        ["empty()","Check empty","O(1)"],
    ]),
    ("queue (<queue>)", [
        ["push(x)","Insert element","O(1)"],
        ["pop()","Remove front","O(1)"],
        ["front()","Access front","O(1)"],
        ["back()","Access back","O(1)"],
    ]),
    ("priority_queue (<queue>)", [
        ["push(x)","Insert element","O(log N)"],
        ["pop()","Remove top","O(log N)"],
        ["top()","Access top","O(1)"],
        ["empty()","Check empty","O(1)"],
    ]),
    ("set / multiset (<set>)", [
        ["insert(x)","Insert element","O(log N)"],
        ["erase(x)","Erase element","O(log N)"],
        ["find(x)","Find element","O(log N)"],
        ["count(x)","Count occurrences","O(log N)"],
    ]),
    ("map / multimap (<map>)", [
        ["m[key]","Insert or update","O(log N)"],
        ["insert()","Insert pair","O(log N)"],
        ["erase(key)","Erase by key","O(log N)"],
        ["find(key)","Find element","O(log N)"],
    ]),
    ("unordered_map / unordered_set", [
        ["insert(x)","Insert element","O(1) average"],
        ["erase(x)","Erase element","O(1) average"],
        ["find(x)","Find element","O(1) average"],
        ["count(x)","Check existence","O(1) average"],
    ]),
    ("Algorithms (<algorithm>)", [
        ["sort()","Sort range","O(N log N)"],
        ["reverse()","Reverse range","O(N)"],
        ["find()","Find element","O(N)"],
        ["count()","Count occurrences","O(N)"],
        ["binary_search()","Binary search","O(log N)"],
        ["lower_bound()","First >= value","O(log N)"],
        ["upper_bound()","First > value","O(log N)"],
    ]),
]

# Add all sections naturally
for title_text, rows in sections:
    content.append(Paragraph(title_text, h1))
    content.append(make_table([["Name","Details","Time Complexity"]] + rows))

# Build PDF
doc.build(content)

# Automatically open PDF after creation
os.startfile(file_path)
print("PDF created and opened at:", file_path)
