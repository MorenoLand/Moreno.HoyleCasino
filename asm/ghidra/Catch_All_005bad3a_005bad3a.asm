; Catch_All@005bad3a  005bad3a
005bad3a  MOV EAX,dword ptr [EBP + 0x10]
005bad3d  SHL EAX,0x4
005bad40  MOV ECX,dword ptr [EBP + 0xfffffdb4]
005bad46  ADD EAX,dword ptr [ECX + 0x8]
005bad49  MOV dword ptr [EBP + 0xfffffe74],EAX
005bad4f  MOV EDX,dword ptr [EBP + 0xfffffe74]
005bad55  MOV dword ptr [EBP + 0xfffffe78],EDX
005bad5b  MOV EAX,dword ptr [EBP + 0x10]
005bad5e  SHL EAX,0x4
005bad61  ADD EAX,dword ptr [EBP + 0xc]
005bad64  MOV dword ptr [EBP + 0xfffffe7c],EAX
005bad6a  MOV CL,byte ptr [EBP + 0xfffffea2]
005bad70  MOV byte ptr [EBP + 0xfffffea3],CL
005bad76  MOV EDX,dword ptr [EBP + 0xfffffe78]
005bad7c  MOV dword ptr [EBP + 0xfffffe80],EDX
005bad82  MOV EAX,dword ptr [EBP + 0xfffffe7c]
005bad88  MOV dword ptr [EBP + 0xfffffe84],EAX
005bad8e  JMP 0x005bad9f
005bad90  MOV ECX,dword ptr [EBP + 0xfffffe84]
005bad96  ADD ECX,0x10
005bad99  MOV dword ptr [EBP + 0xfffffe84],ECX
005bad9f  MOV EDX,dword ptr [EBP + 0xfffffe84]
005bada5  CMP EDX,dword ptr [EBP + 0xfffffe80]
005badab  JZ 0x005badd0
005badad  MOV ECX,dword ptr [EBP + 0xfffffe84]
005badb3  CALL 0x005be450
005badb8  XOR EAX,EAX
005badba  AND EAX,0x1
005badbd  JZ 0x005badce
005badbf  MOV ECX,dword ptr [EBP + 0xfffffe84]
005badc5  PUSH ECX
005badc6  CALL 0x00686cae
005badcb  ADD ESP,0x4
005badce  JMP 0x005bad90
005badd0  PUSH 0x0
005badd2  PUSH 0x0
005badd4  CALL 0x00686fc0
