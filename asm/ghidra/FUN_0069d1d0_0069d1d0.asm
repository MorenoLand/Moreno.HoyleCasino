; FUN_0069d1d0  0069d1d0
0069d1d0  PUSH ESI
0069d1d1  MOV ESI,dword ptr [ESP + 0x8]
0069d1d5  MOV ECX,ESI
0069d1d7  XOR EAX,EAX
0069d1d9  PUSH 0x100
0069d1de  MOV dword ptr [ECX],EAX
0069d1e0  MOV dword ptr [ECX + 0x4],EAX
0069d1e3  MOV dword ptr [ECX + 0x8],EAX
0069d1e6  MOV dword ptr [ECX + 0xc],EAX
0069d1e9  MOV dword ptr [ECX + 0x10],EAX
0069d1ec  CALL 0x006872fa
0069d1f1  ADD ESP,0x4
0069d1f4  MOV dword ptr [ESI + 0x8],EAX
0069d1f7  MOV dword ptr [ESI + 0xc],EAX
0069d1fa  MOV byte ptr [EAX],0x0
0069d1fd  MOV dword ptr [ESI + 0x10],0x100
0069d204  POP ESI
0069d205  RET
