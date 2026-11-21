; FUN_00552720  00552720
00552720  PUSH EBP
00552721  MOV EBP,ESP
00552723  SUB ESP,0x8
00552726  MOV dword ptr [EBP + -0x8],ECX
00552729  MOV ECX,dword ptr [EBP + -0x8]
0055272c  CALL 0x005e9e20
00552731  MOV EAX,dword ptr [EBP + -0x8]
00552734  MOV dword ptr [EAX],0x6c84d8
0055273a  MOV dword ptr [EBP + -0x4],0x0
00552741  JMP 0x0055274c
00552743  MOV ECX,dword ptr [EBP + -0x4]
00552746  ADD ECX,0x1
00552749  MOV dword ptr [EBP + -0x4],ECX
0055274c  CMP dword ptr [EBP + -0x4],0x5
00552750  JGE 0x0055277e
00552752  MOV EDX,dword ptr [EBP + -0x4]
00552755  MOV EAX,dword ptr [EBP + -0x8]
00552758  MOV dword ptr [EAX + EDX*0x4 + 0x4],0x0
00552760  MOV ECX,dword ptr [EBP + -0x4]
00552763  MOV EDX,dword ptr [EBP + -0x8]
00552766  MOV dword ptr [EDX + ECX*0x4 + 0x18],0x0
0055276e  MOV EAX,dword ptr [EBP + -0x4]
00552771  MOV ECX,dword ptr [EBP + -0x8]
00552774  MOV dword ptr [ECX + EAX*0x4 + 0x4c],0x0
0055277c  JMP 0x00552743
0055277e  MOV EDX,dword ptr [EBP + -0x8]
00552781  MOV dword ptr [EDX + 0x60],0x0
00552788  MOV EAX,dword ptr [EBP + -0x8]
0055278b  MOV dword ptr [EAX + 0x64],0x0
00552792  MOV ECX,dword ptr [EBP + -0x8]
00552795  MOV dword ptr [ECX + 0x68],0x0
0055279c  MOV EDX,dword ptr [EBP + -0x8]
0055279f  MOV dword ptr [EDX + 0x6c],0x0
005527a6  MOV EAX,dword ptr [EBP + -0x8]
005527a9  MOV dword ptr [EAX + 0x70],0x0
005527b0  MOV ECX,dword ptr [EBP + -0x8]
005527b3  MOV dword ptr [ECX + 0x74],0x0
005527ba  MOV EDX,dword ptr [EBP + -0x8]
005527bd  MOV dword ptr [EDX + 0x90],0x0
005527c7  MOV dword ptr [EBP + -0x4],0x0
005527ce  JMP 0x005527d9
005527d0  MOV EAX,dword ptr [EBP + -0x4]
005527d3  ADD EAX,0x1
005527d6  MOV dword ptr [EBP + -0x4],EAX
005527d9  CMP dword ptr [EBP + -0x4],0x3
005527dd  JGE 0x005527ef
005527df  MOV ECX,dword ptr [EBP + -0x4]
005527e2  MOV EDX,dword ptr [EBP + -0x8]
005527e5  MOV dword ptr [EDX + ECX*0x4 + 0x78],0x0
005527ed  JMP 0x005527d0
005527ef  MOV EAX,dword ptr [EBP + -0x8]
005527f2  MOV dword ptr [EAX + 0x84],0x0
005527fc  MOV ECX,dword ptr [EBP + -0x8]
005527ff  MOV dword ptr [ECX + 0x88],0x0
00552809  MOV EDX,dword ptr [EBP + -0x8]
0055280c  MOV dword ptr [EDX + 0x8c],0x0
00552816  MOV EAX,dword ptr [EBP + -0x8]
00552819  MOV dword ptr [EAX + 0x94],0x0
00552823  MOV ECX,dword ptr [EBP + -0x8]
00552826  MOV dword ptr [ECX + 0x98],0x0
00552830  MOV EAX,dword ptr [EBP + -0x8]
00552833  MOV ESP,EBP
00552835  POP EBP
00552836  RET
