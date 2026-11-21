; FUN_004c6900  004c6900
004c6900  PUSH EBP
004c6901  MOV EBP,ESP
004c6903  SUB ESP,0x34
004c6906  MOV dword ptr [EBP + -0x30],ECX
004c6909  MOV dword ptr [EBP + -0x4],0x0
004c6910  MOV EAX,dword ptr [EBP + -0x30]
004c6913  MOV ECX,dword ptr [EAX + 0x400]
004c6919  MOV dword ptr [EBP + -0x4],ECX
004c691c  CMP dword ptr [EBP + -0x4],0x1
004c6920  JZ 0x004c6932
004c6922  CMP dword ptr [EBP + -0x4],0x2
004c6926  JZ 0x004c6932
004c6928  CMP dword ptr [EBP + -0x4],0x3
004c692c  JNZ 0x004c69f4
004c6932  MOV ECX,dword ptr [0x00791eb8]
004c6938  CALL 0x005da7b0
004c693d  MOVZX EDX,AL
004c6940  TEST EDX,EDX
004c6942  JZ 0x004c6954
004c6944  MOV EAX,[0x007947e0]
004c6949  MOV ECX,dword ptr [EAX + 0x4efc]
004c694f  MOV dword ptr [EBP + -0x34],ECX
004c6952  JMP 0x004c6962
004c6954  MOV ECX,dword ptr [0x00791364]
004c695a  CALL 0x0047e2c0
004c695f  MOV dword ptr [EBP + -0x34],EAX
004c6962  MOV EDX,dword ptr [EBP + -0x34]
004c6965  MOV dword ptr [EBP + -0x28],EDX
004c6968  MOV EAX,dword ptr [EBP + -0x30]
004c696b  MOV ECX,dword ptr [EAX + 0x400]
004c6971  MOV dword ptr [EBP + -0x2c],ECX
004c6974  LEA EDX,[EBP + -0x24]
004c6977  PUSH EDX
004c6978  MOV EAX,dword ptr [EBP + -0x2c]
004c697b  PUSH EAX
004c697c  MOV ECX,dword ptr [EBP + -0x28]
004c697f  PUSH ECX
004c6980  CALL 0x00519c80
004c6985  ADD ESP,0xc
004c6988  MOV EDX,dword ptr [EBP + -0x30]
004c698b  MOV EAX,dword ptr [EBP + -0x24]
004c698e  MOV dword ptr [EDX + 0x404],EAX
004c6994  MOV ECX,dword ptr [EBP + -0x30]
004c6997  MOV EDX,dword ptr [EBP + -0x20]
004c699a  MOV dword ptr [ECX + 0x408],EDX
004c69a0  MOV EAX,dword ptr [EBP + -0x30]
004c69a3  MOV ECX,dword ptr [EBP + -0x1c]
004c69a6  MOV dword ptr [EAX + 0x40c],ECX
004c69ac  MOV EDX,dword ptr [EBP + -0x30]
004c69af  MOV EAX,dword ptr [EBP + -0x14]
004c69b2  MOV dword ptr [EDX + 0x410],EAX
004c69b8  MOV ECX,dword ptr [EBP + -0x30]
004c69bb  MOV EDX,dword ptr [EBP + -0x10]
004c69be  MOV dword ptr [ECX + 0x414],EDX
004c69c4  MOV EAX,dword ptr [EBP + -0x30]
004c69c7  MOV ECX,dword ptr [EBP + -0x8]
004c69ca  MOV dword ptr [EAX + 0x41c],ECX
004c69d0  MOV EDX,dword ptr [EBP + -0x30]
004c69d3  MOV EAX,dword ptr [EBP + -0xc]
004c69d6  MOV dword ptr [EDX + 0x418],EAX
004c69dc  MOV ECX,dword ptr [EBP + -0x30]
004c69df  MOV EDX,dword ptr [EBP + -0x18]
004c69e2  MOV dword ptr [ECX + 0x420],EDX
004c69e8  MOV EAX,dword ptr [EBP + -0x30]
004c69eb  MOV byte ptr [EAX + 0x424],0x0
004c69f2  JMP 0x004c6a66
004c69f4  MOV ECX,dword ptr [EBP + -0x30]
004c69f7  MOV dword ptr [ECX + 0x404],0x0
004c6a01  MOV EDX,dword ptr [EBP + -0x30]
004c6a04  MOV dword ptr [EDX + 0x408],0x0
004c6a0e  MOV EAX,dword ptr [EBP + -0x30]
004c6a11  MOV dword ptr [EAX + 0x40c],0x0
004c6a1b  MOV ECX,dword ptr [EBP + -0x30]
004c6a1e  MOV dword ptr [ECX + 0x410],0x0
004c6a28  MOV EDX,dword ptr [EBP + -0x30]
004c6a2b  MOV dword ptr [EDX + 0x414],0x0
004c6a35  MOV EAX,dword ptr [EBP + -0x30]
004c6a38  MOV dword ptr [EAX + 0x418],0x0
004c6a42  MOV ECX,dword ptr [EBP + -0x30]
004c6a45  MOV dword ptr [ECX + 0x41c],0x0
004c6a4f  MOV EDX,dword ptr [EBP + -0x30]
004c6a52  MOV dword ptr [EDX + 0x420],0x0
004c6a5c  MOV EAX,dword ptr [EBP + -0x30]
004c6a5f  MOV byte ptr [EAX + 0x424],0x0
004c6a66  MOV ESP,EBP
004c6a68  POP EBP
004c6a69  RET
