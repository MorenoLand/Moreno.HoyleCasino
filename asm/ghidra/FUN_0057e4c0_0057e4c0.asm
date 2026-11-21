; FUN_0057e4c0  0057e4c0
0057e4c0  PUSH EBP
0057e4c1  MOV EBP,ESP
0057e4c3  PUSH ECX
0057e4c4  MOV dword ptr [EBP + -0x4],ECX
0057e4c7  MOV EAX,dword ptr [EBP + -0x4]
0057e4ca  MOV ECX,dword ptr [EAX + 0x1e4]
0057e4d0  MOV EDX,dword ptr [EBP + -0x4]
0057e4d3  MOV EAX,dword ptr [EDX + 0x1e4]
0057e4d9  MOV EDX,dword ptr [ECX]
0057e4db  MOV ECX,EAX
0057e4dd  MOV EAX,dword ptr [EDX + 0x70]
0057e4e0  CALL EAX
0057e4e2  MOV ECX,dword ptr [EBP + -0x4]
0057e4e5  MOV dword ptr [ECX + 0x1e8],0x0
0057e4ef  MOV EDX,dword ptr [EBP + -0x4]
0057e4f2  MOV dword ptr [EDX + 0x1ec],0x0
0057e4fc  MOV EAX,dword ptr [EBP + -0x4]
0057e4ff  MOV dword ptr [EAX + 0x1f0],0x0
0057e509  MOV ECX,dword ptr [EBP + -0x4]
0057e50c  MOV EDX,dword ptr [ECX + 0x1f8]
0057e512  MOV EAX,dword ptr [EBP + -0x4]
0057e515  MOV ECX,dword ptr [EAX + 0x1f8]
0057e51b  MOV EDX,dword ptr [EDX]
0057e51d  MOV EAX,dword ptr [EDX + 0x70]
0057e520  CALL EAX
0057e522  MOV ECX,dword ptr [EBP + -0x4]
0057e525  MOV EDX,dword ptr [ECX + 0x1fc]
0057e52b  MOV EAX,dword ptr [EBP + -0x4]
0057e52e  MOV ECX,dword ptr [EAX + 0x1fc]
0057e534  MOV EDX,dword ptr [EDX]
0057e536  MOV EAX,dword ptr [EDX + 0x70]
0057e539  CALL EAX
0057e53b  MOV ECX,dword ptr [EBP + -0x4]
0057e53e  MOV ECX,dword ptr [ECX + 0x200]
0057e544  CALL 0x0057f5f0
0057e549  MOV ESP,EBP
0057e54b  POP EBP
0057e54c  RET
