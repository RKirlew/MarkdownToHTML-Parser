# 📝 Markdown to HTML Converter in C++

A simple C++ project that reads a Markdown file and converts it into a basic HTML document. Supports headings (`#`, `##`) and paragraphs. This project demonstrates text parsing, file handling, and HTML generation in C++ , with a roadmap to turn it into an object-oriented program and serve the result using a built-in HTTP server.

## 🚀 Features

- Parses `# Heading` → `<h1>`
- Parses `## Subheading` → `<h2>`
- Converts other lines into `<p>` paragraphs
- Outputs valid HTML
- Prints result to console (future: write to HTML file)
- Extensible and beginner-friendly code

## 🧱 Planned Improvements

- [ ] Refactor into object-oriented structure
- [ ] Add `FileManager` class for input/output abstraction
- [ ] Write parsed HTML to a file
- [ ] Add lightweight HTTP server to serve the HTML
- [ ] Add support for more Markdown syntax (`**bold**`, `- lists`, etc.)

## 🛠️ Usage

1. Create a `input.md` file with Markdown content:

   ```md
   # My Page

   ## Introduction

   This is a sample paragraph.
