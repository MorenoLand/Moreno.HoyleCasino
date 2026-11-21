; Catch_All@0061208f  0061208f
0061208f  MOV ECX,dword ptr [EBP + -0x60]
00612092  MOV dword ptr [EBP + 0xfffffedc],ECX
00612098  MOV EDX,dword ptr [EBP + -0x64]
0061209b  MOV dword ptr [EBP + 0xfffffee0],EDX
006120a1  MOV AL,byte ptr [EBP + 0xfffffef2]
006120a7  MOV byte ptr [EBP + 0xfffffef3],AL
006120ad  MOV ECX,dword ptr [EBP + 0xfffffedc]
006120b3  MOV dword ptr [EBP + 0xfffffee4],ECX
006120b9  MOV EDX,dword ptr [EBP + 0xfffffee0]
006120bf  MOV dword ptr [EBP + 0xfffffee8],EDX
006120c5  JMP 0x006120d6
006120c7  MOV EAX,dword ptr [EBP + 0xfffffee8]
006120cd  ADD EAX,0x48
006120d0  MOV dword ptr [EBP + 0xfffffee8],EAX
006120d6  MOV ECX,dword ptr [EBP + 0xfffffee8]
006120dc  CMP ECX,dword ptr [EBP + 0xfffffee4]
006120e2  JZ 0x00612116
006120e4  MOV EDX,dword ptr [EBP + 0xfffffee8]
006120ea  ADD EDX,0x20
006120ed  MOV dword ptr [EBP + 0xfffffeec],EDX
006120f3  MOV ECX,dword ptr [EBP + 0xfffffeec]
006120f9  CALL 0x005be450
006120fe  XOR EAX,EAX
00612100  AND EAX,0x1
00612103  JZ 0x00612114
00612105  MOV ECX,dword ptr [EBP + 0xfffffee8]
0061210b  PUSH ECX
0061210c  CALL 0x00686cae
00612111  ADD ESP,0x4
00612114  JMP 0x006120c7
00612116  MOV EDX,dword ptr [EBP + -0x64]
00612119  PUSH EDX
0061211a  CALL 0x00686cae
0061211f  ADD ESP,0x4
00612122  PUSH 0x0
00612124  PUSH 0x0
00612126  CALL 0x00686fc0
