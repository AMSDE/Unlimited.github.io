#include<bits/stdc++.h>
using namespace std;
int dep,kg=0;
char tit[100005];
void tag(void){for (int i=1;i<=4*kg;i++) putchar(' ');}
void path(void){for (int i=1;i<=dep;i++){cout<<"..";putchar('/');}}
void meta(string ch){tag();cout<<"<meta "<<ch<<">\n";}
void linkrel(string ch){tag();cout<<"<link rel=\"stylesheet\" href=\"";path();cout<<ch<<"\">\n";}
void head(void){
	tag();cout<<"<head>\n";kg++;
	meta("charset=\"utf-8\"");
	tag();cout<<"<title>"<<tit<<"<\\title>\n";
	meta("name=\"description\" content=\"\"");
	meta("name=\"viewport\" content=\"width=device-width\"");
	linkrel("css/bootstrap.min.css");
	linkrel("css/font-awesome/css/font-awesome.min.css");
	tag();cout<<"<link href='http://fonts.googleapis.com/css?family=Open+Sans:400,600|PT+Serif:400,400italic' rel='stylesheet' type='text/css'>\n";
	linkrel("css/style.css\" id=\"theme-styles");
	kg--;tag();cout<<"<\\head>\n";
}
void html(void){
	tag();cout<<"<html lang=\"en\">\n";
	head();
	tag();cout<<"<\\html>\n";
}
int main()
{
	freopen("setting.ini","r",stdin);
	scanf("%d",&dep);
	scanf("%s",tit);
	freopen("3.html","w",stdout);
	cout<<"<!DOCTYPE html>\n";
	html();
	return 0;
}
