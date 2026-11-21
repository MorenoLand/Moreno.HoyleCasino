; FUN_00402370  00402370
00402370  PUSH EBP
00402371  MOV EBP,ESP
00402373  SUB ESP,0x18
00402376  MOV dword ptr [EBP + -0x18],ECX
00402379  MOV dword ptr [EBP + -0x8],0xffffffff
00402380  MOV dword ptr [EBP + -0x10],0xffffffff
00402387  MOV ECX,dword ptr [0x007902f0]
0040238d  CALL 0x004091b0
00402392  MOV dword ptr [EBP + -0xc],EAX
00402395  MOV ECX,dword ptr [0x007902f0]
0040239b  CALL 0x004091d0
004023a0  MOV dword ptr [EBP + -0x14],EAX
004023a3  MOV dword ptr [EBP + -0x4],0x0
004023aa  JMP 0x004023b5
004023ac  MOV EAX,dword ptr [EBP + -0x4]
004023af  ADD EAX,0x1
004023b2  MOV dword ptr [EBP + -0x4],EAX
004023b5  CMP dword ptr [EBP + -0x4],0x3
004023b9  JGE 0x004023d8
004023bb  MOV ECX,dword ptr [EBP + -0x4]
004023be  MOV EDX,dword ptr [EBP + -0x18]
004023c1  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x5c]
004023c5  MOV ECX,dword ptr [EBP + -0x4]
004023c8  MOV EDX,dword ptr [EBP + -0x18]
004023cb  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x5c]
004023cf  MOV EAX,dword ptr [EAX]
004023d1  MOV EDX,dword ptr [EAX + 0x70]
004023d4  CALL EDX
004023d6  JMP 0x004023ac
004023d8  MOV EAX,dword ptr [EBP + -0xc]
004023db  CMP EAX,dword ptr [EBP + -0x14]
004023de  JNZ 0x00402410
004023e0  PUSH 0x6
004023e2  MOV ECX,dword ptr [EBP + -0x18]
004023e5  MOV EDX,dword ptr [ECX + 0x64]
004023e8  MOV EAX,dword ptr [EBP + -0x18]
004023eb  MOV ECX,dword ptr [EAX + 0x64]
004023ee  MOV EDX,dword ptr [EDX]
004023f0  MOV EAX,dword ptr [EDX + 0xb0]
004023f6  CALL EAX
004023f8  MOV ECX,dword ptr [EBP + -0x18]
004023fb  MOV EDX,dword ptr [ECX + 0x64]
004023fe  MOV EAX,dword ptr [EBP + -0x18]
00402401  MOV ECX,dword ptr [EAX + 0x64]
00402404  MOV EDX,dword ptr [EDX]
00402406  MOV EAX,dword ptr [EDX + 0x74]
00402409  CALL EAX
0040240b  JMP 0x004024ae
00402410  MOV ECX,dword ptr [EBP + -0xc]
00402413  CMP ECX,dword ptr [EBP + -0x14]
00402416  JLE 0x00402428
00402418  MOV dword ptr [EBP + -0x8],0x0
0040241f  MOV dword ptr [EBP + -0x10],0x1
00402426  JMP 0x00402436
00402428  MOV dword ptr [EBP + -0x8],0x1
0040242f  MOV dword ptr [EBP + -0x10],0x0
00402436  PUSH 0x0
00402438  MOV EDX,dword ptr [EBP + -0x8]
0040243b  MOV EAX,dword ptr [EBP + -0x18]
0040243e  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x5c]
00402442  MOV EDX,dword ptr [EBP + -0x8]
00402445  MOV EAX,dword ptr [EBP + -0x18]
00402448  MOV EDX,dword ptr [EAX + EDX*0x4 + 0x5c]
0040244c  MOV EAX,dword ptr [ECX]
0040244e  MOV ECX,EDX
00402450  MOV EDX,dword ptr [EAX + 0xb0]
00402456  CALL EDX
00402458  PUSH 0x1
0040245a  MOV EAX,dword ptr [EBP + -0x10]
0040245d  MOV ECX,dword ptr [EBP + -0x18]
00402460  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x5c]
00402464  MOV EAX,dword ptr [EBP + -0x10]
00402467  MOV ECX,dword ptr [EBP + -0x18]
0040246a  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x5c]
0040246e  MOV EDX,dword ptr [EDX]
00402470  MOV EAX,dword ptr [EDX + 0xb0]
00402476  CALL EAX
00402478  MOV ECX,dword ptr [EBP + -0x8]
0040247b  MOV EDX,dword ptr [EBP + -0x18]
0040247e  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x5c]
00402482  MOV ECX,dword ptr [EBP + -0x8]
00402485  MOV EDX,dword ptr [EBP + -0x18]
00402488  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x5c]
0040248c  MOV EAX,dword ptr [EAX]
0040248e  MOV EDX,dword ptr [EAX + 0x74]
00402491  CALL EDX
00402493  MOV EAX,dword ptr [EBP + -0x10]
00402496  MOV ECX,dword ptr [EBP + -0x18]
00402499  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x5c]
0040249d  MOV EAX,dword ptr [EBP + -0x10]
004024a0  MOV ECX,dword ptr [EBP + -0x18]
004024a3  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x5c]
004024a7  MOV EDX,dword ptr [EDX]
004024a9  MOV EAX,dword ptr [EDX + 0x74]
004024ac  CALL EAX
004024ae  MOV ESP,EBP
004024b0  POP EBP
004024b1  RET
