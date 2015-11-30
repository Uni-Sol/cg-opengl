if [ ! -e "$1" ]
then 
echo "Error: Must specify source directory"
echo "usage: ./compile.sh [source_dir/] [output_exec]" 
exit 0
fi

if [ ! -n "$2" ]
then 
echo "Error: Must specify output filename"
echo "usage: ./compile.sh [source_dir/] [output_exec]" 
exit 0
fi

if [ -e $1 ] 
then gcc  -w $1*.cpp -o $2 -lGL -lGLU -lglut
exit 0
fi
