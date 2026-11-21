; FUN_005cf100  005cf100
005cf100  PUSH EBP
005cf101  MOV EBP,ESP
005cf103  SUB ESP,0x948
005cf109  MOV EAX,[0x00781870]
005cf10e  XOR EAX,EBP
005cf110  MOV dword ptr [EBP + -0x4],EAX
005cf113  MOV dword ptr [EBP + 0xfffff6b8],ECX
005cf119  MOV dword ptr [EBP + 0xfffffbf4],0x12
005cf123  MOV dword ptr [EBP + 0xfffffbe0],0xf
005cf12d  MOV word ptr [EBP + 0xfffffbe4],0x45
005cf136  MOV word ptr [EBP + 0xfffffbe6],0xc4
005cf13f  MOV word ptr [EBP + 0xfffffbe8],0x144
005cf148  MOV word ptr [EBP + 0xfffffaac],0x68
005cf151  MOV word ptr [EBP + 0xfffffaae],0x92
005cf15a  MOV word ptr [EBP + 0xfffffab0],0xbd
005cf163  MOV word ptr [EBP + 0xfffffab2],0xe7
005cf16c  MOV word ptr [EBP + 0xfffffab4],0x112
005cf175  MOV byte ptr [EBP + 0xfffffbf8],0x0
005cf17c  PUSH 0x3ff
005cf181  PUSH 0x0
005cf183  LEA EAX,[EBP + 0xfffffbf9]
005cf189  PUSH EAX
005cf18a  CALL 0x00686fa2
005cf18f  ADD ESP,0xc
005cf192  PUSH 0x6d2f54
005cf197  LEA ECX,[EBP + 0xfffffbf8]
005cf19d  PUSH ECX
005cf19e  CALL 0x00686ec6
005cf1a3  ADD ESP,0x8
005cf1a6  MOV word ptr [EBP + 0xfffffbf0],0x0
005cf1af  JMP 0x005cf1c3
005cf1b1  MOV DX,word ptr [EBP + 0xfffffbf0]
005cf1b8  ADD DX,0x1
005cf1bc  MOV word ptr [EBP + 0xfffffbf0],DX
005cf1c3  MOVSX EAX,word ptr [EBP + 0xfffffbf0]
005cf1ca  CMP EAX,0xf
005cf1cd  JGE 0x005cf1e3
005cf1cf  MOVSX ECX,word ptr [EBP + 0xfffffbf0]
005cf1d6  IMUL ECX,ECX,0x13
005cf1d9  MOV byte ptr [EBP + ECX*0x1 + 0xfffffab8],0x0
005cf1e1  JMP 0x005cf1b1
005cf1e3  PUSH 0x6c2d28
005cf1e8  LEA EDX,[EBP + 0xfffffbf8]
005cf1ee  PUSH EDX
005cf1ef  CALL 0x005ea9c0
005cf1f4  ADD ESP,0x8
005cf1f7  MOV dword ptr [EBP + 0xfffffbec],EAX
005cf1fd  CMP dword ptr [EBP + 0xfffffbec],0x0
005cf204  JZ 0x005cf30e
005cf20a  MOV EAX,dword ptr [EBP + 0xfffffbec]
005cf210  PUSH EAX
005cf211  PUSH 0x1
005cf213  PUSH 0x3e8
005cf218  LEA ECX,[EBP + 0xfffff6c0]
005cf21e  PUSH ECX
005cf21f  CALL dword ptr [0x006b225c]
005cf225  ADD ESP,0x10
005cf228  MOV word ptr [EBP + 0xfffffbf0],0x0
005cf231  JMP 0x005cf245
005cf233  MOV DX,word ptr [EBP + 0xfffffbf0]
005cf23a  ADD DX,0x1
005cf23e  MOV word ptr [EBP + 0xfffffbf0],DX
005cf245  MOVSX EAX,word ptr [EBP + 0xfffffbf0]
005cf24c  CMP EAX,0xf
005cf24f  JGE 0x005cf2fe
005cf255  PUSH 0x12
005cf257  MOVSX ECX,word ptr [EBP + 0xfffffbf0]
005cf25e  IMUL ECX,ECX,0x12
005cf261  LEA EDX,[EBP + ECX*0x1 + 0xfffff6c0]
005cf268  PUSH EDX
005cf269  MOVSX EAX,word ptr [EBP + 0xfffffbf0]
005cf270  IMUL EAX,EAX,0x13
005cf273  LEA ECX,[EBP + EAX*0x1 + 0xfffffab8]
005cf27a  PUSH ECX
005cf27b  CALL 0x00686fde
005cf280  ADD ESP,0xc
005cf283  MOVSX EDX,word ptr [EBP + 0xfffffbf0]
005cf28a  IMUL EDX,EDX,0x13
005cf28d  MOV byte ptr [EBP + EDX*0x1 + 0xfffffaca],0x0
005cf295  MOV word ptr [EBP + 0xfffff6bc],0x0
005cf29e  JMP 0x005cf2b2
005cf2a0  MOV AX,word ptr [EBP + 0xfffff6bc]
005cf2a7  ADD AX,0x1
005cf2ab  MOV word ptr [EBP + 0xfffff6bc],AX
005cf2b2  MOVSX ECX,word ptr [EBP + 0xfffff6bc]
005cf2b9  CMP ECX,0x12
005cf2bc  JGE 0x005cf2f9
005cf2be  MOVSX EDX,word ptr [EBP + 0xfffff6bc]
005cf2c5  MOVSX EAX,word ptr [EBP + 0xfffffbf0]
005cf2cc  IMUL EAX,EAX,0x13
005cf2cf  LEA ECX,[EBP + EAX*0x1 + 0xfffffab8]
005cf2d6  MOV DL,byte ptr [ECX + EDX*0x1]
005cf2d9  ADD DL,0x1
005cf2dc  MOVSX EAX,word ptr [EBP + 0xfffff6bc]
005cf2e3  MOVSX ECX,word ptr [EBP + 0xfffffbf0]
005cf2ea  IMUL ECX,ECX,0x13
005cf2ed  LEA ECX,[EBP + ECX*0x1 + 0xfffffab8]
005cf2f4  MOV byte ptr [ECX + EAX*0x1],DL
005cf2f7  JMP 0x005cf2a0
005cf2f9  JMP 0x005cf233
005cf2fe  MOV EDX,dword ptr [EBP + 0xfffffbec]
005cf304  PUSH EDX
005cf305  CALL dword ptr [0x006b2258]
005cf30b  ADD ESP,0x4
005cf30e  MOV word ptr [EBP + 0xfffffbf0],0x0
005cf317  JMP 0x005cf32b
005cf319  MOV AX,word ptr [EBP + 0xfffffbf0]
005cf320  ADD AX,0x1
005cf324  MOV word ptr [EBP + 0xfffffbf0],AX
005cf32b  MOVSX ECX,word ptr [EBP + 0xfffffbf0]
005cf332  CMP ECX,0xf
005cf335  JGE 0x005cf3c6
005cf33b  PUSH -0x1
005cf33d  PUSH 0x30
005cf33f  PUSH 0x1
005cf341  MOVSX EAX,word ptr [EBP + 0xfffffbf0]
005cf348  CDQ
005cf349  MOV ECX,0x5
005cf34e  IDIV ECX
005cf350  MOVSX EDX,word ptr [EBP + EDX*0x2 + 0xfffffaac]
005cf358  PUSH EDX
005cf359  MOVSX EAX,word ptr [EBP + 0xfffffbf0]
005cf360  CDQ
005cf361  MOV ECX,0x5
005cf366  IDIV ECX
005cf368  MOVSX EDX,word ptr [EBP + EAX*0x2 + 0xfffffbe4]
005cf370  PUSH EDX
005cf371  PUSH 0x22
005cf373  PUSH 0x66
005cf375  PUSH 0x3b
005cf377  MOVSX EAX,word ptr [EBP + 0xfffffbf0]
005cf37e  IMUL EAX,EAX,0x13
005cf381  LEA ECX,[EBP + EAX*0x1 + 0xfffffab8]
005cf388  PUSH ECX
005cf389  MOVSX EDX,word ptr [EBP + 0xfffffbf0]
005cf390  PUSH EDX
005cf391  PUSH 0x0
005cf393  MOV ECX,dword ptr [EBP + 0xfffff6b8]
005cf399  CALL 0x005fa5b0
005cf39e  MOV dword ptr [EBP + 0xfffffbdc],EAX
005cf3a4  MOVSX EAX,word ptr [EBP + 0xfffffbf0]
005cf3ab  IMUL EAX,EAX,0x13
005cf3ae  LEA ECX,[EBP + EAX*0x1 + 0xfffffab8]
005cf3b5  PUSH ECX
005cf3b6  MOV ECX,dword ptr [EBP + 0xfffffbdc]
005cf3bc  CALL 0x005ee710
005cf3c1  JMP 0x005cf319
005cf3c6  MOV ECX,dword ptr [EBP + -0x4]
005cf3c9  XOR ECX,EBP
005cf3cb  CALL 0x00686d72
005cf3d0  MOV ESP,EBP
005cf3d2  POP EBP
005cf3d3  RET
