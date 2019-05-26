#!/bin/bash/

echo "name? :"
read NAME

dir=Contest/${NAME}
template=template.cpp

mkdir ${dir}
cp ${template} ${dir}/A.cpp
cp ${template} ${dir}/B.cpp
cp ${template} ${dir}/C.cpp
cp ${template} ${dir}/D.cpp
cp ${template} ${dir}/E.cpp
cp ${template} ${dir}/F.cpp
