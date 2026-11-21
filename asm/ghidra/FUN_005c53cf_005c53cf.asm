; FUN_005c53cf  005c53cf
005c53cf  MOV dword ptr [EBP + -0x4],0xffffffff
005c53d6  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005c53dc  MOV ECX,dword ptr [EAX + 0x8]
005c53df  MOV EDX,dword ptr [EBP + 0x10]
005c53e2  LEA EAX,[ECX + EDX*0x4]
005c53e5  MOV ECX,dword ptr [EBP + 0xfffffdf8]
005c53eb  MOV dword ptr [ECX + 0x8],EAX
005c53ee  MOV EDX,dword ptr [EBP + 0x10]
005c53f1  SHL EDX,0x2
005c53f4  MOV EAX,dword ptr [EBP + 0xfffffdf8]
005c53fa  MOV ECX,dword ptr [EAX + 0x8]
005c53fd  SUB ECX,EDX
005c53ff  MOV dword ptr [EBP + 0xfffffe90],ECX
005c5405  MOV EDX,dword ptr [EBP + 0xc]
005c5408  MOV dword ptr [EBP + 0xfffffe94],EDX
005c540e  MOV EAX,dword ptr [EBP + 0xfffffe90]
005c5414  MOV dword ptr [EBP + 0xfffffea0],EAX
005c541a  MOV ECX,dword ptr [EBP + 0xfffffe94]
005c5420  MOV dword ptr [EBP + 0xfffffe98],ECX
005c5426  JMP 0x005c5437
005c5428  MOV EDX,dword ptr [EBP + 0xfffffe98]
005c542e  ADD EDX,0x4
005c5431  MOV dword ptr [EBP + 0xfffffe98],EDX
005c5437  MOV EAX,dword ptr [EBP + 0xfffffe98]
005c543d  CMP EAX,dword ptr [EBP + 0xfffffea0]
005c5443  JZ 0x005c5452
005c5445  MOV ECX,dword ptr [EBP + 0xfffffe98]
005c544b  MOV EDX,dword ptr [EBP + -0x14]
005c544e  MOV dword ptr [ECX],EDX
005c5450  JMP 0x005c5428
005c5452  JMP 0x005c5581
