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
then gcc -w $1*.c -o $2 -lglfw3 -lGL -lGLU -pthread -lm -lX11 -lXcursor -lXxf86vm -lXrandr -lXinerama -lXi -lXmu -ldl
exit 0
fi
