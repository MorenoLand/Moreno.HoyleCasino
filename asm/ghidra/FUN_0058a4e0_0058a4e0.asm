; FUN_0058a4e0  0058a4e0
0058a4e0  PUSH EBP
0058a4e1  MOV EBP,ESP
0058a4e3  PUSH ECX
0058a4e4  MOV dword ptr [EBP + -0x4],ECX
0058a4e7  MOV EAX,dword ptr [EBP + -0x4]
0058a4ea  MOV ECX,dword ptr [EAX + 0x3c08]
0058a4f0  CMP ECX,dword ptr [EBP + 0x8]
0058a4f3  JZ 0x0058a523
0058a4f5  MOV EDX,dword ptr [EBP + -0x4]
0058a4f8  MOV EAX,dword ptr [EBP + 0x8]
0058a4fb  MOV dword ptr [EDX + 0x3c08],EAX
0058a501  MOV ECX,dword ptr [EBP + -0x4]
0058a504  MOV EDX,dword ptr [ECX + 0x3c08]
0058a50a  MOV EAX,dword ptr [EBP + -0x4]
0058a50d  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x3be4]
0058a514  PUSH ECX
0058a515  MOV EDX,dword ptr [EBP + -0x4]
0058a518  MOV ECX,dword ptr [EDX + 0x314]
0058a51e  CALL 0x0058dfb0
0058a523  MOV ESP,EBP
0058a525  POP EBP
0058a526  RET 0x4
