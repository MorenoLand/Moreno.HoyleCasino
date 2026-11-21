; FUN_005bbe20  005bbe20
005bbe20  PUSH EBP
005bbe21  MOV EBP,ESP
005bbe23  SUB ESP,0x34
005bbe26  XOR EAX,EAX
005bbe28  MOV byte ptr [EBP + -0x1],AL
005bbe2b  MOV CL,byte ptr [EBP + -0x3]
005bbe2e  MOV byte ptr [EBP + -0x2],CL
005bbe31  MOV EDX,dword ptr [EBP + 0xc]
005bbe34  MOV dword ptr [EBP + -0x8],EDX
005bbe37  MOV EAX,dword ptr [EBP + 0x8]
005bbe3a  MOV dword ptr [EBP + -0x10],EAX
005bbe3d  MOV CL,byte ptr [EBP + -0x1]
005bbe40  MOV byte ptr [EBP + -0x31],CL
005bbe43  MOV EDX,dword ptr [EBP + 0x10]
005bbe46  MOV dword ptr [EBP + -0x30],EDX
005bbe49  MOV EAX,dword ptr [EBP + -0x30]
005bbe4c  MOV dword ptr [EBP + -0x2c],EAX
005bbe4f  MOV ECX,dword ptr [EBP + -0x8]
005bbe52  MOV dword ptr [EBP + -0x28],ECX
005bbe55  MOV EDX,dword ptr [EBP + -0x10]
005bbe58  MOV dword ptr [EBP + -0x24],EDX
005bbe5b  XOR EAX,EAX
005bbe5d  MOV byte ptr [EBP + -0x11],AL
005bbe60  MOV CL,byte ptr [EBP + -0x13]
005bbe63  MOV byte ptr [EBP + -0x12],CL
005bbe66  MOV EDX,dword ptr [EBP + -0x28]
005bbe69  MOV dword ptr [EBP + -0x18],EDX
005bbe6c  MOV EAX,dword ptr [EBP + -0x24]
005bbe6f  MOV dword ptr [EBP + -0x20],EAX
005bbe72  MOV CL,byte ptr [EBP + -0x11]
005bbe75  PUSH ECX
005bbe76  MOV DL,byte ptr [EBP + -0x12]
005bbe79  PUSH EDX
005bbe7a  MOV EAX,dword ptr [EBP + 0x14]
005bbe7d  PUSH EAX
005bbe7e  MOV ECX,dword ptr [EBP + -0x2c]
005bbe81  PUSH ECX
005bbe82  MOV EDX,dword ptr [EBP + -0x18]
005bbe85  PUSH EDX
005bbe86  MOV EAX,dword ptr [EBP + -0x20]
005bbe89  PUSH EAX
005bbe8a  CALL 0x005bc620
005bbe8f  ADD ESP,0x18
005bbe92  MOV ESP,EBP
005bbe94  POP EBP
005bbe95  RET
