; FUN_005aef40  005aef40
005aef40  PUSH EBP
005aef41  MOV EBP,ESP
005aef43  PUSH ECX
005aef44  MOV dword ptr [EBP + -0x4],ECX
005aef47  MOV EAX,dword ptr [EBP + -0x4]
005aef4a  MOV byte ptr [EAX + 0x4],0x0
005aef4e  MOV ECX,dword ptr [EBP + -0x4]
005aef51  MOV byte ptr [ECX + 0x6],0x0
005aef55  MOV EDX,dword ptr [EBP + -0x4]
005aef58  MOV byte ptr [EDX + 0x7],0x0
005aef5c  MOV EAX,dword ptr [EBP + -0x4]
005aef5f  MOV byte ptr [EAX + 0x8],0x0
005aef63  MOV ECX,dword ptr [EBP + -0x4]
005aef66  MOV byte ptr [ECX + 0x9],0x0
005aef6a  MOV EDX,dword ptr [EBP + -0x4]
005aef6d  MOV byte ptr [EDX + 0xb],0x0
005aef71  MOV EAX,dword ptr [EBP + -0x4]
005aef74  MOV byte ptr [EAX + 0xa],0x0
005aef78  MOV ECX,dword ptr [EBP + -0x4]
005aef7b  MOV byte ptr [ECX + 0xc],0x0
005aef7f  MOV EDX,dword ptr [EBP + -0x4]
005aef82  MOV byte ptr [EDX + 0xd],0x0
005aef86  MOV EAX,dword ptr [EBP + -0x4]
005aef89  MOV byte ptr [EAX + 0xe],0x0
005aef8d  MOV ECX,dword ptr [EBP + -0x4]
005aef90  MOV byte ptr [ECX + 0x10],0x0
005aef94  MOV EDX,dword ptr [EBP + -0x4]
005aef97  MOV byte ptr [EDX + 0x12],0x0
005aef9b  MOV EAX,dword ptr [EBP + -0x4]
005aef9e  MOV byte ptr [EAX + 0x11],0x0
005aefa2  MOV ECX,dword ptr [EBP + -0x4]
005aefa5  MOV byte ptr [ECX + 0x13],0x0
005aefa9  MOV EDX,dword ptr [EBP + -0x4]
005aefac  MOV byte ptr [EDX + 0xf],0x0
005aefb0  MOV EAX,dword ptr [EBP + -0x4]
005aefb3  MOV byte ptr [EAX + 0x18],0x0
005aefb7  MOV ECX,dword ptr [EBP + -0x4]
005aefba  MOV byte ptr [ECX + 0x19],0x0
005aefbe  CMP dword ptr [EBP + 0x8],0x0
005aefc2  JNZ 0x005aeff1
005aefc4  MOV ECX,dword ptr [0x00793604]
005aefca  CALL 0x005b6a60
005aefcf  MOV EDX,dword ptr [EBP + 0x8]
005aefd2  PUSH EDX
005aefd3  PUSH 0x1
005aefd5  MOV EAX,[0x00793600]
005aefda  MOV ECX,dword ptr [EAX + 0x4]
005aefdd  MOV EDX,dword ptr [0x00793600]
005aefe3  MOV EAX,dword ptr [EDX + 0x4]
005aefe6  MOV EDX,dword ptr [ECX]
005aefe8  MOV ECX,EAX
005aefea  MOV EAX,dword ptr [EDX + 0x8]
005aefed  CALL EAX
005aefef  JMP 0x005af013
005aeff1  MOV ECX,dword ptr [EBP + 0x8]
005aeff4  PUSH ECX
005aeff5  PUSH 0x1f4
005aeffa  MOV EDX,dword ptr [0x00793600]
005af000  MOV EAX,dword ptr [EDX + 0x4]
005af003  MOV ECX,dword ptr [0x00793600]
005af009  MOV ECX,dword ptr [ECX + 0x4]
005af00c  MOV EDX,dword ptr [EAX]
005af00e  MOV EAX,dword ptr [EDX + 0x8]
005af011  CALL EAX
005af013  MOV ESP,EBP
005af015  POP EBP
005af016  RET 0x4
