#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    cout<<"main 主分支"<<endl<<".gitignore 用于存放不会更改提交的文件 但是弊端是有点,实践尝试"<<endl;
    cout<<"git init 初始化"<<endl<<"git add 添加到暂存区"<<endl<<"git status 查看状态"<<endl<<"git commit 提交暂存区 -m “内容” "<<endl;
    cout<<"git commit -am 既有add又有message"<<endl;
    cout<<"git branch 创建新分支"<<endl<<"git switch 转换分支 -c 创建并转换分支"<<endl;
    cout<<"                "<<"也可以 git checkout 转换分支"<<endl<<"        git checkout -b 创建并转换分支"<<endl;
    cout<<"git merge 将其他分支合并到当前分支"<<endl;
    cout<<"git log 查看更改日志"<<endl;

    cout<<"git clone 链接 下载"<<endl;
    /*  远程连接专用push an existing repository from the command line
        git remote add origin git@github.com:llj123456789/test.git
        git branch -M main
        git push -u origin main
                create a new repository on the command line
        echo "# testgit" >> README.md
        git init
        git add README.md
        git commit -m "first commit"
        git branch -M main
        git remote add origin git@github.com:llj123456789/testgit.git
        git push -u origin main

        


    */
}   