directory_name=$1
file_name=$2

if [ -z "$directory_name" ] || [ -z "$file_name"];
	then
		echo "Correct usage way  script [Path] [Filename]"
		exit 0
fi

find "$directory_name"/ -name "$file_name*" > file.txt

exit 0