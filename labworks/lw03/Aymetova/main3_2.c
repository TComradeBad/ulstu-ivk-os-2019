#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main()
{ printf("�������� �.�. ���-21 ��� 3\n");
pid_t pid, ppid;
int a = 0;
/* ��� �������� �������� ������ �������� � ����� ����� �����������������
�������� �������� ��� ��������: ������ � ����� */
//(void)fork();
/* ������ �������������� �������� � ������������� �������� (� ������ ��
��������� !!!) */
pid = getpid();
ppid = getppid();
/* ����� ����������� ���������� ��������� �������� ���������� a �
����� ��������� ����� 0 */
pid = fork();
if (pid == 0)
printf("�������\n");
else
printf("��������\n");
for (int i = 0; i<10; i++){
a++;
/* �������� �������� PID, PPID � ����������� �������� ���������� a (�
������ �� ��������� !!!) */
printf("pid = %d, ppid = %d, result = %d\n", (int)pid, (int)ppid, a);
}
return 0;
}
