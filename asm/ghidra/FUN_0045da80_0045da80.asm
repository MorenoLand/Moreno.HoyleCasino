; FUN_0045da80  0045da80
0045da80  PUSH EBP
0045da81  MOV EBP,ESP
0045da83  SUB ESP,0x24
0045da86  MOV dword ptr [EBP + -0x24],ECX
0045da89  MOV EAX,dword ptr [EBP + -0x24]
0045da8c  CMP dword ptr [EAX + 0x80],0x1
0045da93  JNZ 0x0045db6f
0045da99  MOV ECX,dword ptr [0x00790738]
0045da9f  MOV EDX,dword ptr [ECX + 0x104]
0045daa5  MOV dword ptr [EBP + -0xc],EDX
0045daa8  MOV EAX,dword ptr [EBP + -0xc]
0045daab  PUSH EAX
0045daac  MOV ECX,dword ptr [0x00790738]
0045dab2  CALL 0x004603a0
0045dab7  MOVZX ECX,AL
0045daba  TEST ECX,ECX
0045dabc  JZ 0x0045db38
0045dabe  MOV ECX,dword ptr [0x00790738]
0045dac4  CALL 0x004603f0
0045dac9  MOV dword ptr [EBP + -0x10],EAX
0045dacc  MOV EDX,dword ptr [EBP + -0x10]
0045dacf  MOV byte ptr [EDX + 0x4a0],0x1
0045dad6  MOV EAX,[0x00790738]
0045dadb  MOV ECX,dword ptr [EAX + 0x104]
0045dae1  MOV dword ptr [EBP + -0x14],ECX
0045dae4  MOV EDX,dword ptr [0x00790738]
0045daea  MOV EAX,dword ptr [EDX + 0x4]
0045daed  MOV dword ptr [EBP + -0x18],EAX
0045daf0  MOV ECX,dword ptr [EBP + -0x14]
0045daf3  SHL ECX,0x5
0045daf6  MOV EDX,dword ptr [EBP + -0x18]
0045daf9  LEA EAX,[EDX + ECX*0x1 + 0x48]
0045dafd  MOV ECX,0x1
0045db02  SHL ECX,0x3
0045db05  MOV EDX,dword ptr [EAX + ECX*0x1]
0045db08  MOV EAX,dword ptr [EAX + ECX*0x1 + 0x4]
0045db0c  MOV dword ptr [EBP + -0x8],EDX
0045db0f  MOV dword ptr [EBP + -0x4],EAX
0045db12  CMP dword ptr [EBP + -0x8],0x5
0045db16  JL 0x0045db36
0045db18  MOV ECX,dword ptr [0x00790738]
0045db1e  MOV EDX,dword ptr [ECX + 0x104]
0045db24  MOV dword ptr [EBP + -0x1c],EDX
0045db27  MOV EAX,[0x00790738]
0045db2c  ADD EAX,dword ptr [EBP + -0x1c]
0045db2f  MOV byte ptr [EAX + 0xf9],0x1
0045db36  JMP 0x0045db50
0045db38  MOV ECX,dword ptr [0x00790738]
0045db3e  CALL 0x004603f0
0045db43  MOV dword ptr [EBP + -0x20],EAX
0045db46  MOV ECX,dword ptr [EBP + -0x20]
0045db49  MOV byte ptr [ECX + 0x4a1],0x1
0045db50  MOV ECX,dword ptr [EBP + -0x24]
0045db53  CALL 0x005db890
0045db58  PUSH 0x0
0045db5a  PUSH 0x1
0045db5c  MOV EDX,dword ptr [EBP + -0x24]
0045db5f  MOV EAX,dword ptr [EDX + 0x4]
0045db62  MOV ECX,dword ptr [EBP + -0x24]
0045db65  MOV ECX,dword ptr [ECX + 0x4]
0045db68  MOV EDX,dword ptr [EAX]
0045db6a  MOV EAX,dword ptr [EDX + 0x8]
0045db6d  CALL EAX
0045db6f  MOV ESP,EBP
0045db71  POP EBP
0045db72  RET
