; FUN_004fa370  004fa370
004fa370  PUSH EBP
004fa371  MOV EBP,ESP
004fa373  PUSH ECX
004fa374  PUSH ESI
004fa375  MOV dword ptr [EBP + -0x4],ECX
004fa378  MOV ECX,dword ptr [EBP + -0x4]
004fa37b  CALL 0x005d8020
004fa380  MOV EAX,dword ptr [EBP + -0x4]
004fa383  CMP dword ptr [EAX + 0xa4],0x0
004fa38a  JZ 0x004fa3fc
004fa38c  MOV ECX,dword ptr [EBP + -0x4]
004fa38f  MOV EDX,dword ptr [ECX + 0xa4]
004fa395  MOVZX EAX,byte ptr [EDX + 0xe8]
004fa39c  TEST EAX,EAX
004fa39e  JZ 0x004fa3fc
004fa3a0  MOV ECX,dword ptr [EBP + -0x4]
004fa3a3  MOV ESI,dword ptr [ECX + 0xa4]
004fa3a9  MOV EDX,dword ptr [EBP + -0x4]
004fa3ac  MOV ECX,dword ptr [EDX + 0xa4]
004fa3b2  CALL 0x0047e420
004fa3b7  MOV ECX,dword ptr [0x00791ebc]
004fa3bd  CMP ECX,dword ptr [ESI + EAX*0x4 + 0x4]
004fa3c1  JZ 0x004fa3fa
004fa3c3  MOV EDX,dword ptr [EBP + -0x4]
004fa3c6  MOV ESI,dword ptr [EDX + 0xa4]
004fa3cc  MOV EAX,dword ptr [EBP + -0x4]
004fa3cf  MOV ECX,dword ptr [EAX + 0xa4]
004fa3d5  CALL 0x0047e420
004fa3da  MOV ECX,dword ptr [ESI + EAX*0x4 + 0x4]
004fa3de  MOV dword ptr [0x00791ebc],ECX
004fa3e4  PUSH 0x0
004fa3e6  MOV EDX,dword ptr [0x00791ebc]
004fa3ec  MOV EAX,dword ptr [EDX + 0x4]
004fa3ef  PUSH EAX
004fa3f0  PUSH 0x1
004fa3f2  MOV ECX,dword ptr [EBP + -0x4]
004fa3f5  CALL 0x005d8a20
004fa3fa  JMP 0x004fa41d
004fa3fc  CMP dword ptr [0x00791ebc],0x0
004fa403  JZ 0x004fa41d
004fa405  PUSH 0x0
004fa407  PUSH -0x1
004fa409  PUSH 0x0
004fa40b  MOV ECX,dword ptr [EBP + -0x4]
004fa40e  CALL 0x005d8a20
004fa413  MOV dword ptr [0x00791ebc],0x0
004fa41d  POP ESI
004fa41e  MOV ESP,EBP
004fa420  POP EBP
004fa421  RET
