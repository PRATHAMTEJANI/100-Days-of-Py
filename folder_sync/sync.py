import os
import shutil
from hash_utils import get_hash

def sync(src, dest):
    for root, dirs, files in os.walk(src):
        for file in files:
            src_path = os.path.join(root, file)
            dest_path = src_path.replace(src, dest)

            os.makedirs(os.path.dirname(dest_path), exist_ok=True)

            if not os.path.exists(dest_path) or get_hash(src_path) != get_hash(dest_path):
                shutil.copy2(src_path, dest_path)
                print(f"Synced: {file}")

sync("D:/folderA", "D:/folderB")
