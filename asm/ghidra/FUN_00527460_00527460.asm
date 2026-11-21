; FUN_00527460  00527460
00527460  PUSH EBP
00527461  MOV EBP,ESP
00527463  SUB ESP,0x18
00527466  MOV dword ptr [EBP + -0x18],ECX
00527469  PUSH 0xc
0052746b  MOV ECX,dword ptr [EBP + 0x8]
0052746e  CALL 0x0063aae0
00527473  MOV dword ptr [EBP + -0x4],EAX
00527476  MOV EAX,dword ptr [EBP + -0x4]
00527479  MOV ECX,dword ptr [EAX + 0x4]
0052747c  MOV EDX,dword ptr [EBP + -0x4]
0052747f  ADD ECX,dword ptr [EDX + 0xc]
00527482  MOV EAX,dword ptr [EBP + 0xc]
00527485  ADD ECX,dword ptr [EAX]
00527487  MOV EDX,dword ptr [EBP + 0xc]
0052748a  MOV dword ptr [EDX],ECX
0052748c  MOV EAX,dword ptr [EBP + 0xc]
0052748f  MOV ECX,dword ptr [EAX + 0x4]
00527492  MOV EDX,dword ptr [EBP + -0x4]
00527495  ADD ECX,dword ptr [EDX + 0x8]
00527498  MOV EAX,dword ptr [EBP + 0xc]
0052749b  MOV dword ptr [EAX + 0x4],ECX
0052749e  MOV ECX,dword ptr [EBP + 0x10]
005274a1  MOV EDX,dword ptr [ECX]
005274a3  MOV EAX,dword ptr [EBP + -0x4]
005274a6  ADD EDX,dword ptr [EAX + 0x4]
005274a9  MOV ECX,dword ptr [EBP + 0x10]
005274ac  MOV dword ptr [ECX],EDX
005274ae  MOV EDX,dword ptr [EBP + 0x10]
005274b1  MOV EAX,dword ptr [EDX + 0x4]
005274b4  MOV ECX,dword ptr [EBP + -0x4]
005274b7  ADD EAX,dword ptr [ECX + 0x8]
005274ba  MOV EDX,dword ptr [EBP + 0x10]
005274bd  MOV dword ptr [EDX + 0x4],EAX
005274c0  MOV EAX,dword ptr [EBP + 0x14]
005274c3  MOV ECX,dword ptr [EAX]
005274c5  MOV EDX,dword ptr [EBP + -0x4]
005274c8  ADD ECX,dword ptr [EDX + 0xc]
005274cb  MOV EAX,dword ptr [EBP + 0x14]
005274ce  MOV dword ptr [EAX],ECX
005274d0  MOV ECX,dword ptr [EBP + 0x14]
005274d3  MOV EDX,dword ptr [ECX + 0x4]
005274d6  MOV EAX,dword ptr [EBP + -0x4]
005274d9  ADD EDX,dword ptr [EAX + 0x10]
005274dc  MOV ECX,dword ptr [EBP + 0x14]
005274df  MOV dword ptr [ECX + 0x4],EDX
005274e2  PUSH -0x1
005274e4  MOV EDX,dword ptr [0x007947e0]
005274ea  MOV EAX,dword ptr [EDX]
005274ec  MOV ECX,dword ptr [0x007947e0]
005274f2  MOV EDX,dword ptr [EAX + 0x33c]
005274f8  CALL EDX
005274fa  MOVZX EAX,AL
005274fd  TEST EAX,EAX
005274ff  JZ 0x0052757f
00527501  MOV ECX,dword ptr [0x0162ee84]
00527507  CALL 0x005f3bf0
0052750c  CMP EAX,0xc
0052750f  JNZ 0x0052757f
00527511  LEA ECX,[EBP + -0xc]
00527514  PUSH ECX
00527515  LEA EDX,[EBP + -0x14]
00527518  PUSH EDX
00527519  MOV EAX,dword ptr [EBP + 0x8]
0052751c  PUSH EAX
0052751d  MOV ECX,dword ptr [0x007947e0]
00527523  CALL 0x005e0c40
00527528  MOV ECX,dword ptr [EBP + -0x14]
0052752b  ADD ECX,dword ptr [EBP + -0xc]
0052752e  MOV EDX,dword ptr [EBP + 0xc]
00527531  ADD ECX,dword ptr [EDX]
00527533  MOV EAX,dword ptr [EBP + 0xc]
00527536  MOV dword ptr [EAX],ECX
00527538  MOV ECX,dword ptr [EBP + 0xc]
0052753b  MOV EDX,dword ptr [ECX + 0x4]
0052753e  ADD EDX,dword ptr [EBP + -0x10]
00527541  MOV EAX,dword ptr [EBP + 0xc]
00527544  MOV dword ptr [EAX + 0x4],EDX
00527547  MOV ECX,dword ptr [EBP + 0x10]
0052754a  MOV EDX,dword ptr [ECX]
0052754c  ADD EDX,dword ptr [EBP + -0x14]
0052754f  MOV EAX,dword ptr [EBP + 0x10]
00527552  MOV dword ptr [EAX],EDX
00527554  MOV ECX,dword ptr [EBP + 0x10]
00527557  MOV EDX,dword ptr [ECX + 0x4]
0052755a  ADD EDX,dword ptr [EBP + -0x10]
0052755d  MOV EAX,dword ptr [EBP + 0x10]
00527560  MOV dword ptr [EAX + 0x4],EDX
00527563  MOV ECX,dword ptr [EBP + 0x14]
00527566  MOV EDX,dword ptr [ECX]
00527568  ADD EDX,dword ptr [EBP + -0xc]
0052756b  MOV EAX,dword ptr [EBP + 0x14]
0052756e  MOV dword ptr [EAX],EDX
00527570  MOV ECX,dword ptr [EBP + 0x14]
00527573  MOV EDX,dword ptr [ECX + 0x4]
00527576  ADD EDX,dword ptr [EBP + -0x8]
00527579  MOV EAX,dword ptr [EBP + 0x14]
0052757c  MOV dword ptr [EAX + 0x4],EDX
0052757f  MOV ESP,EBP
00527581  POP EBP
00527582  RET 0x10
