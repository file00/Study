# Dictionary Membership Test

file_types = {
    ".txt": "Text File",
    ".pdf": "PDF Document",
    ".jpg": "JPEG Image",
}

# use of in and not in operators
print(".pdf" in file_types)      # Output: True
print(".mp3" in file_types)      # Output: False

print(".mp3" not in file_types)      # Output: True
