import os
import shutil

file_types = {
    "Images": [".jpg", ".png", ".jpeg"],
    "Videos": [".mp4", ".mkv"],
    "Documents": [".pdf", ".docx", ".txt"],
    "Music": [".mp3"],
    "Compressed": [".zip", ".rar"]
}

def organize(folder_path):
    for filename in os.listdir(folder_path):
        file_path = os.path.join(folder_path, filename)

        if os.path.isfile(file_path):
            ext = os.path.splitext(filename)[1]
            
            for folder, extensions in file_types.items():
                if ext in extensions:
                    folder_name = os.path.join(folder_path, folder)
                    if not os.path.exists(folder_name):
                        os.makedirs(folder_name)
                    shutil.move(file_path, folder_name)
                    print(f"Moved: {filename} → {folder}")
                    break


#nphn tspk ysqb tchv