; FUN_0047ee90  0047ee90
0047ee90  PUSH EBP
0047ee91  MOV EBP,ESP
0047ee93  SUB ESP,0x10
0047ee96  MOV dword ptr [EBP + -0x10],ECX
0047ee99  MOV EAX,dword ptr [EBP + -0x10]
0047ee9c  CMP dword ptr [EAX + 0x484],0x0
0047eea3  JG 0x0047eebc
0047eea5  PUSH 0x81b
0047eeaa  PUSH 0x6bc694
0047eeaf  PUSH 0x6bcc88
0047eeb4  CALL 0x005e9f20
0047eeb9  ADD ESP,0xc
0047eebc  MOV EDX,dword ptr [EBP + -0x10]
0047eebf  MOV EAX,dword ptr [EDX + 0x24]
0047eec2  MOV ECX,dword ptr [EAX + 0x8]
0047eec5  CALL 0x0060c9a0
0047eeca  CMP EAX,0x4
0047eecd  JZ 0x0047eee6
0047eecf  PUSH 0x81c
0047eed4  PUSH 0x6bc694
0047eed9  PUSH 0x6bcc6c
0047eede  CALL 0x005e9f20
0047eee3  ADD ESP,0xc
0047eee6  MOV EDX,dword ptr [EBP + -0x10]
0047eee9  MOV EAX,0x4
0047eeee  SUB EAX,dword ptr [EDX + 0x484]
0047eef4  PUSH EAX
0047eef5  MOV ECX,dword ptr [EBP + -0x10]
0047eef8  MOV EDX,dword ptr [ECX + 0x24]
0047eefb  MOV ECX,dword ptr [EDX + 0x8]
0047eefe  CALL 0x0060ca40
0047ef03  MOV dword ptr [EBP + -0xc],EAX
0047ef06  MOV ECX,dword ptr [EBP + -0xc]
0047ef09  CALL 0x00463e50
0047ef0e  MOV dword ptr [EBP + -0x8],EAX
0047ef11  CMP dword ptr [EBP + -0x8],0x0
0047ef15  JL 0x0047ef1d
0047ef17  CMP dword ptr [EBP + -0x8],0x34
0047ef1b  JL 0x0047ef38
0047ef1d  XOR EAX,EAX
0047ef1f  JNZ 0x0047ef38
0047ef21  PUSH 0x823
0047ef26  PUSH 0x6bc694
0047ef2b  PUSH 0x6b2b64
0047ef30  CALL 0x005e9f20
0047ef35  ADD ESP,0xc
0047ef38  MOV EAX,dword ptr [EBP + -0x8]
0047ef3b  CDQ
0047ef3c  MOV ECX,0xd
0047ef41  IDIV ECX
0047ef43  MOV dword ptr [EBP + -0x4],EAX
0047ef46  CMP dword ptr [EBP + -0x4],0x0
0047ef4a  JNZ 0x0047ef60
0047ef4c  MOV EDX,dword ptr [0x0079076c]
0047ef52  MOV AL,byte ptr [EDX]
0047ef54  MOV ECX,dword ptr [EBP + 0x8]
0047ef57  MOV byte ptr [ECX],AL
0047ef59  MOV EAX,dword ptr [EBP + 0x8]
0047ef5c  JMP 0x0047efa4
0047ef60  CMP dword ptr [EBP + -0x4],0x1
0047ef64  JNZ 0x0047ef7a
0047ef66  MOV EDX,dword ptr [0x00790770]
0047ef6c  MOV AL,byte ptr [EDX]
0047ef6e  MOV ECX,dword ptr [EBP + 0x8]
0047ef71  MOV byte ptr [ECX],AL
0047ef73  MOV EAX,dword ptr [EBP + 0x8]
0047ef76  JMP 0x0047efa4
0047ef7a  CMP dword ptr [EBP + -0x4],0x2
0047ef7e  JNZ 0x0047ef94
0047ef80  MOV EDX,dword ptr [0x00790764]
0047ef86  MOV AL,byte ptr [EDX]
0047ef88  MOV ECX,dword ptr [EBP + 0x8]
0047ef8b  MOV byte ptr [ECX],AL
0047ef8d  MOV EAX,dword ptr [EBP + 0x8]
0047ef90  JMP 0x0047efa4
0047ef94  MOV EDX,dword ptr [0x00790754]
0047ef9a  MOV AL,byte ptr [EDX]
0047ef9c  MOV ECX,dword ptr [EBP + 0x8]
0047ef9f  MOV byte ptr [ECX],AL
0047efa1  MOV EAX,dword ptr [EBP + 0x8]
0047efa4  MOV ESP,EBP
0047efa6  POP EBP
0047efa7  RET 0x4
