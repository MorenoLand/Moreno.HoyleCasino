; FUN_005f1a50  005f1a50
005f1a50  PUSH EBP
005f1a51  MOV EBP,ESP
005f1a53  SUB ESP,0xc
005f1a56  MOV dword ptr [EBP + -0xc],ECX
005f1a59  MOV EAX,dword ptr [EBP + -0xc]
005f1a5c  CMP dword ptr [EAX + 0x4],0x0
005f1a60  JZ 0x005f1a6d
005f1a62  MOV ECX,dword ptr [EBP + -0xc]
005f1a65  MOV ECX,dword ptr [ECX + 0x4]
005f1a68  CALL 0x005fc250
005f1a6d  MOV dword ptr [EBP + -0x4],0x0
005f1a74  MOV EDX,dword ptr [EBP + -0x4]
005f1a77  PUSH EDX
005f1a78  MOV ECX,dword ptr [0x015e55e8]
005f1a7e  ADD ECX,0x4
005f1a81  CALL 0x0060ca40
005f1a86  MOV dword ptr [EBP + -0x8],EAX
005f1a89  MOV ECX,dword ptr [0x015e55e8]
005f1a8f  ADD ECX,0x4
005f1a92  CALL 0x0060c9a0
005f1a97  CMP dword ptr [EBP + -0x4],EAX
005f1a9a  JGE 0x005f1ac9
005f1a9c  MOV EAX,dword ptr [EBP + -0x8]
005f1a9f  MOV EDX,dword ptr [EAX]
005f1aa1  MOV ECX,dword ptr [EBP + -0x8]
005f1aa4  MOV EAX,dword ptr [EDX + 0x8]
005f1aa7  CALL EAX
005f1aa9  MOV ECX,dword ptr [EBP + -0x4]
005f1aac  ADD ECX,0x1
005f1aaf  MOV dword ptr [EBP + -0x4],ECX
005f1ab2  MOV EDX,dword ptr [EBP + -0x4]
005f1ab5  PUSH EDX
005f1ab6  MOV ECX,dword ptr [0x015e55e8]
005f1abc  ADD ECX,0x4
005f1abf  CALL 0x0060ca40
005f1ac4  MOV dword ptr [EBP + -0x8],EAX
005f1ac7  JMP 0x005f1a89
005f1ac9  MOV ESP,EBP
005f1acb  POP EBP
005f1acc  RET
