; FUN_00573190  00573190
00573190  PUSH EBP
00573191  MOV EBP,ESP
00573193  SUB ESP,0x8
00573196  MOV dword ptr [EBP + -0x8],ECX
00573199  MOV ECX,dword ptr [EBP + -0x8]
0057319c  CALL 0x005e9e20
005731a1  MOV EAX,dword ptr [EBP + -0x8]
005731a4  MOV dword ptr [EAX],0x6cacac
005731aa  MOV ECX,dword ptr [EBP + -0x8]
005731ad  MOV dword ptr [ECX + 0x8],0x0
005731b4  MOV EDX,dword ptr [EBP + -0x8]
005731b7  MOV dword ptr [EDX + 0xc],0x0
005731be  MOV EAX,dword ptr [EBP + -0x8]
005731c1  MOV dword ptr [EAX + 0x10],0x0
005731c8  MOV ECX,dword ptr [EBP + -0x8]
005731cb  MOV dword ptr [ECX + 0x14],0x0
005731d2  MOV EDX,dword ptr [EBP + -0x8]
005731d5  MOV dword ptr [EDX + 0x18],0x0
005731dc  MOV EAX,dword ptr [EBP + -0x8]
005731df  MOV dword ptr [EAX + 0x1c],0x0
005731e6  MOV ECX,dword ptr [EBP + -0x8]
005731e9  MOV dword ptr [ECX + 0x20],0x0
005731f0  MOV EDX,dword ptr [EBP + -0x8]
005731f3  MOV dword ptr [EDX + 0x24],0x0
005731fa  MOV EAX,dword ptr [EBP + -0x8]
005731fd  MOV dword ptr [EAX + 0x34],0x0
00573204  MOV word ptr [EBP + -0x4],0x0
0057320a  JMP 0x00573218
0057320c  MOV CX,word ptr [EBP + -0x4]
00573210  ADD CX,0x1
00573214  MOV word ptr [EBP + -0x4],CX
00573218  MOVSX EDX,word ptr [EBP + -0x4]
0057321c  CMP EDX,0x3
0057321f  JGE 0x00573232
00573221  MOVSX EAX,word ptr [EBP + -0x4]
00573225  MOV ECX,dword ptr [EBP + -0x8]
00573228  MOV dword ptr [ECX + EAX*0x4 + 0x28],0x0
00573230  JMP 0x0057320c
00573232  MOV word ptr [EBP + -0x4],0x0
00573238  JMP 0x00573246
0057323a  MOV DX,word ptr [EBP + -0x4]
0057323e  ADD DX,0x1
00573242  MOV word ptr [EBP + -0x4],DX
00573246  MOVSX EAX,word ptr [EBP + -0x4]
0057324a  CMP EAX,0x5
0057324d  JGE 0x00573260
0057324f  MOVSX ECX,word ptr [EBP + -0x4]
00573253  MOV EDX,dword ptr [EBP + -0x8]
00573256  MOV dword ptr [EDX + ECX*0x4 + 0x44],0x0
0057325e  JMP 0x0057323a
00573260  MOV word ptr [EBP + -0x4],0x0
00573266  JMP 0x00573274
00573268  MOV AX,word ptr [EBP + -0x4]
0057326c  ADD AX,0x1
00573270  MOV word ptr [EBP + -0x4],AX
00573274  MOVSX ECX,word ptr [EBP + -0x4]
00573278  CMP ECX,0x3
0057327b  JGE 0x0057328e
0057327d  MOVSX EDX,word ptr [EBP + -0x4]
00573281  MOV EAX,dword ptr [EBP + -0x8]
00573284  MOV dword ptr [EAX + EDX*0x4 + 0x38],0x0
0057328c  JMP 0x00573268
0057328e  MOV ECX,dword ptr [EBP + -0x8]
00573291  MOV dword ptr [ECX + 0x58],0x0
00573298  MOV EDX,dword ptr [EBP + -0x8]
0057329b  MOV dword ptr [EDX + 0x5c],0x0
005732a2  MOV EAX,dword ptr [EBP + -0x8]
005732a5  MOV dword ptr [EAX + 0x60],0x0
005732ac  MOV ECX,dword ptr [EBP + -0x8]
005732af  MOV dword ptr [ECX + 0x64],0x0
005732b6  MOV EDX,dword ptr [EBP + -0x8]
005732b9  MOV dword ptr [EDX + 0x4],0x0
005732c0  MOV EAX,dword ptr [EBP + -0x8]
005732c3  MOV ESP,EBP
005732c5  POP EBP
005732c6  RET
