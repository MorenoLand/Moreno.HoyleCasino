; FUN_005aee50  005aee50
005aee50  PUSH EBP
005aee51  MOV EBP,ESP
005aee53  SUB ESP,0x18
005aee56  MOV dword ptr [EBP + -0x10],ECX
005aee59  MOV EAX,dword ptr [EBP + -0x10]
005aee5c  MOVZX ECX,byte ptr [EAX + 0x10]
005aee60  TEST ECX,ECX
005aee62  JNZ 0x005aeefc
005aee68  MOV EDX,dword ptr [EBP + -0x10]
005aee6b  MOV byte ptr [EDX + 0x10],0x1
005aee6f  MOV EAX,dword ptr [EBP + 0x8]
005aee72  PUSH EAX
005aee73  CALL 0x005dcb00
005aee78  ADD ESP,0x4
005aee7b  MOV dword ptr [EBP + -0xc],EAX
005aee7e  MOV ECX,dword ptr [EBP + -0xc]
005aee81  CALL 0x0063aac0
005aee86  MOV ECX,dword ptr [EAX]
005aee88  MOV dword ptr [EBP + -0x4],ECX
005aee8b  CMP dword ptr [EBP + -0x4],0x2
005aee8f  JZ 0x005aeead
005aee91  MOV ECX,dword ptr [EBP + -0xc]
005aee94  CALL 0x0063aac0
005aee99  MOV EDX,dword ptr [EAX]
005aee9b  MOV dword ptr [EBP + -0x8],EDX
005aee9e  CMP dword ptr [EBP + -0x8],0x3
005aeea2  JZ 0x005aeead
005aeea4  MOV dword ptr [EBP + -0x14],0x0
005aeeab  JMP 0x005aeeb4
005aeead  MOV dword ptr [EBP + -0x14],0x1
005aeeb4  MOVZX EAX,byte ptr [EBP + -0x14]
005aeeb8  TEST EAX,EAX
005aeeba  JZ 0x005aeec5
005aeebc  MOV dword ptr [EBP + -0x18],0xffffffff
005aeec3  JMP 0x005aeecb
005aeec5  MOV ECX,dword ptr [EBP + 0x8]
005aeec8  MOV dword ptr [EBP + -0x18],ECX
005aeecb  MOV EDX,dword ptr [EBP + -0x18]
005aeece  PUSH EDX
005aeecf  PUSH 0x4
005aeed1  MOV ECX,dword ptr [0x00793604]
005aeed7  CALL 0x005b7310
005aeedc  PUSH 0x0
005aeede  PUSH 0x1
005aeee0  MOV EAX,[0x00793600]
005aeee5  MOV ECX,dword ptr [EAX + 0x4]
005aeee8  MOV EDX,dword ptr [0x00793600]
005aeeee  MOV EAX,dword ptr [EDX + 0x4]
005aeef1  MOV EDX,dword ptr [ECX]
005aeef3  MOV ECX,EAX
005aeef5  MOV EAX,dword ptr [EDX + 0x8]
005aeef8  CALL EAX
005aeefa  JMP 0x005aef35
005aeefc  MOV ECX,dword ptr [EBP + -0x10]
005aeeff  MOV byte ptr [ECX + 0xd],0x0
005aef03  MOV EDX,dword ptr [EBP + -0x10]
005aef06  MOV byte ptr [EDX + 0x10],0x0
005aef0a  MOV EAX,dword ptr [EBP + 0x8]
005aef0d  PUSH EAX
005aef0e  MOV ECX,dword ptr [0x00793604]
005aef14  CALL 0x005b6c90
005aef19  PUSH 0x0
005aef1b  PUSH 0x1
005aef1d  MOV ECX,dword ptr [0x00793600]
005aef23  MOV EDX,dword ptr [ECX + 0x4]
005aef26  MOV EAX,[0x00793600]
005aef2b  MOV ECX,dword ptr [EAX + 0x4]
005aef2e  MOV EDX,dword ptr [EDX]
005aef30  MOV EAX,dword ptr [EDX + 0x8]
005aef33  CALL EAX
005aef35  MOV ESP,EBP
005aef37  POP EBP
005aef38  RET 0x4
