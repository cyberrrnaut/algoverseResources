# cpp
DSA &amp;&amp; CP


CPP CONFIG BUILD


{
    "cmd": [
        "g++ -std=c++23 \"$file\" -o \"$file_base_name\" && timeout 4s \"./$file_base_name\" < \"/home/cybernaut/algoverseResources/inputf.in\" > \"/home/cybernaut/algoverseResources/outputf.in\""
    ],
    "selector": "source.c++",
    "shell": true,
    "working_dir": "/home/cybernaut/algoverseResources"
}


JAVA CONFIG BUILD 

{
    "cmd": [
        "javac \"$file\" && timeout 4s java -cp \"$file_path\" \"$file_base_name\" < \"/home/cybernaut/algoverseResources/inputf.in\" > \"/home/cybernaut/algoverseResources/outputf.in\""
    ],
    "selector": "source.java",
    "shell": true,
    "working_dir": "${file_path}"
}



RUST NOTES

https://www.notion.so/cyb3rnaut/RUST-bd4ec18cef064349a885391b2a7bab15

