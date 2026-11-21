; FUN_005faee0  005faee0
005faee0  PUSH EBP
005faee1  MOV EBP,ESP
005faee3  PUSH -0x1
005faee5  PUSH 0x6aa516
005faeea  MOV EAX,FS:[0x0]
005faef0  PUSH EAX
005faef1  SUB ESP,0x10
005faef4  MOV EAX,[0x00781870]
005faef9  XOR EAX,EBP
005faefb  PUSH EAX
005faefc  LEA EAX,[EBP + -0xc]
005faeff  MOV FS:[0x0],EAX
005faf05  MOV dword ptr [EBP + -0x18],ECX
005faf08  CMP dword ptr [EBP + 0x8],0x0
005faf0c  JNZ 0x005faf5e
005faf0e  PUSH 0x1fc
005faf13  CALL 0x00686d82
005faf18  ADD ESP,0x4
005faf1b  MOV dword ptr [EBP + -0x14],EAX
005faf1e  MOV dword ptr [EBP + -0x4],0x0
005faf25  CMP dword ptr [EBP + -0x14],0x0
005faf29  JZ 0x005faf44
005faf2b  PUSH 0x1
005faf2d  MOV AL,byte ptr [EBP + 0x24]
005faf30  PUSH EAX
005faf31  PUSH 0x2
005faf33  MOV ECX,dword ptr [EBP + 0x20]
005faf36  PUSH ECX
005faf37  MOV ECX,dword ptr [EBP + -0x14]
005faf3a  CALL 0x00605b90
005faf3f  MOV dword ptr [EBP + -0x1c],EAX
005faf42  JMP 0x005faf4b
005faf44  MOV dword ptr [EBP + -0x1c],0x0
005faf4b  MOV EDX,dword ptr [EBP + -0x1c]
005faf4e  MOV dword ptr [EBP + -0x10],EDX
005faf51  MOV dword ptr [EBP + -0x4],0xffffffff
005faf58  MOV EAX,dword ptr [EBP + -0x10]
005faf5b  MOV dword ptr [EBP + 0x8],EAX
005faf5e  MOV ECX,dword ptr [EBP + 0x8]
005faf61  PUSH ECX
005faf62  MOV ECX,dword ptr [EBP + -0x18]
005faf65  ADD ECX,0xe4
005faf6b  CALL 0x0060c840
005faf70  MOV EDX,dword ptr [EBP + 0x8]
005faf73  MOV EAX,dword ptr [EBP + -0x18]
005faf76  MOV dword ptr [EDX + 0x4],EAX
005faf79  MOV ECX,dword ptr [EBP + 0xc]
005faf7c  PUSH ECX
005faf7d  MOV EDX,dword ptr [EBP + 0x1c]
005faf80  PUSH EDX
005faf81  MOV EAX,dword ptr [EBP + 0x18]
005faf84  PUSH EAX
005faf85  MOV ECX,dword ptr [EBP + 0x14]
005faf88  PUSH ECX
005faf89  MOV EDX,dword ptr [EBP + 0x10]
005faf8c  PUSH EDX
005faf8d  MOV ECX,dword ptr [EBP + 0x8]
005faf90  CALL 0x005eae80
005faf95  CMP dword ptr [EBP + 0x2c],-0x1
005faf99  JZ 0x005fafc3
005faf9b  PUSH 0x0
005faf9d  PUSH 0x0
005faf9f  MOV EAX,dword ptr [EBP + 0x38]
005fafa2  PUSH EAX
005fafa3  MOV ECX,dword ptr [EBP + 0x34]
005fafa6  PUSH ECX
005fafa7  MOV EDX,dword ptr [EBP + 0x30]
005fafaa  PUSH EDX
005fafab  MOV EAX,dword ptr [EBP + 0x2c]
005fafae  PUSH EAX
005fafaf  MOV ECX,dword ptr [EBP + 0x28]
005fafb2  PUSH ECX
005fafb3  MOV EDX,dword ptr [EBP + 0x8]
005fafb6  MOV EAX,dword ptr [EDX]
005fafb8  MOV ECX,dword ptr [EBP + 0x8]
005fafbb  MOV EDX,dword ptr [EAX + 0xdc]
005fafc1  CALL EDX
005fafc3  MOV EAX,dword ptr [EBP + 0x8]
005fafc6  MOV EDX,dword ptr [EAX]
005fafc8  MOV ECX,dword ptr [EBP + 0x8]
005fafcb  MOV EAX,dword ptr [EDX + 0x74]
005fafce  CALL EAX
005fafd0  MOV EAX,dword ptr [EBP + 0x8]
005fafd3  MOV ECX,dword ptr [EBP + -0xc]
005fafd6  MOV dword ptr FS:[0x0],ECX
005fafdd  POP ECX
005fafde  MOV ESP,EBP
005fafe0  POP EBP
005fafe1  RET 0x34
