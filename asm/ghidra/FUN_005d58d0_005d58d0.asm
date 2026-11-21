; FUN_005d58d0  005d58d0
005d58d0  PUSH EBP
005d58d1  MOV EBP,ESP
005d58d3  SUB ESP,0x8
005d58d6  MOV dword ptr [EBP + -0x4],ECX
005d58d9  MOV EAX,dword ptr [EBP + -0x4]
005d58dc  CMP dword ptr [EAX + 0x4cc],0x0
005d58e3  JL 0x005d5906
005d58e5  MOV ECX,dword ptr [EBP + -0x4]
005d58e8  CMP dword ptr [ECX + 0x4cc],0x0
005d58ef  JNZ 0x005d58fd
005d58f1  MOV EDX,dword ptr [EBP + -0x4]
005d58f4  CMP dword ptr [EDX + 0x4d0],0x0
005d58fb  JL 0x005d5906
005d58fd  MOV dword ptr [EBP + -0x8],0x0
005d5904  JMP 0x005d590d
005d5906  MOV dword ptr [EBP + -0x8],0x1
005d590d  MOV AL,byte ptr [EBP + -0x8]
005d5910  MOV ESP,EBP
005d5912  POP EBP
005d5913  RET
