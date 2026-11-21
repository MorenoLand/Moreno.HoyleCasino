; FUN_0053c950  0053c950
0053c950  PUSH EBP
0053c951  MOV EBP,ESP
0053c953  SUB ESP,0x24
0053c956  MOV EAX,[0x00781870]
0053c95b  XOR EAX,EBP
0053c95d  MOV dword ptr [EBP + -0x10],EAX
0053c960  MOV dword ptr [EBP + -0x20],ECX
0053c963  MOV word ptr [EBP + -0x1c],0x24
0053c969  MOV word ptr [EBP + -0x1a],0x15
0053c96f  MOV word ptr [EBP + -0x18],0x1c
0053c975  MOV word ptr [EBP + -0x16],0x15
0053c97b  MOV word ptr [EBP + -0x14],0x13
0053c981  MOV word ptr [EBP + -0x4],0x3
0053c987  MOV EAX,[0x007933f4]
0053c98c  MOV ECX,dword ptr [EAX + 0x98]
0053c992  MOV dword ptr [EBP + -0xc],ECX
0053c995  MOV EDX,dword ptr [0x007933f4]
0053c99b  MOV EAX,dword ptr [EDX + 0x94]
0053c9a1  MOV dword ptr [EBP + -0x8],EAX
0053c9a4  MOV ECX,dword ptr [EBP + -0x20]
0053c9a7  CALL 0x005fc360
0053c9ac  MOV dword ptr [EBP + -0x24],EAX
0053c9af  CMP dword ptr [EBP + -0x24],0x0
0053c9b3  JZ 0x0053c9ce
0053c9b5  CMP dword ptr [EBP + -0x24],0x1
0053c9b9  JZ 0x0053ca57
0053c9bf  CMP dword ptr [EBP + -0x24],0x2
0053c9c3  JZ 0x0053cc6c
0053c9c9  JMP 0x0053cc97
0053c9ce  MOV word ptr [0x007933e4],0x0
0053c9d7  MOV word ptr [0x007933e0],0x0
0053c9e0  MOV ECX,dword ptr [EBP + -0xc]
0053c9e3  CALL 0x005eb240
0053c9e8  MOV [0x007933dc],AX
0053c9ee  MOV ECX,dword ptr [EBP + -0x8]
0053c9f1  CALL 0x005eb240
0053c9f6  MOV [0x007933d8],AX
0053c9fc  PUSH 0x32
0053c9fe  MOV ECX,dword ptr [EBP + -0xc]
0053ca01  MOV EDX,dword ptr [ECX]
0053ca03  MOV ECX,dword ptr [EBP + -0xc]
0053ca06  MOV EAX,dword ptr [EDX + 0x6c]
0053ca09  CALL EAX
0053ca0b  PUSH 0x33
0053ca0d  MOV ECX,dword ptr [EBP + -0x8]
0053ca10  MOV EDX,dword ptr [ECX]
0053ca12  MOV ECX,dword ptr [EBP + -0x8]
0053ca15  MOV EAX,dword ptr [EDX + 0x6c]
0053ca18  CALL EAX
0053ca1a  PUSH 0x0
0053ca1c  MOV ECX,dword ptr [EBP + -0xc]
0053ca1f  MOV EDX,dword ptr [ECX]
0053ca21  MOV ECX,dword ptr [EBP + -0xc]
0053ca24  MOV EAX,dword ptr [EDX + 0xb0]
0053ca2a  CALL EAX
0053ca2c  PUSH 0x0
0053ca2e  MOV ECX,dword ptr [EBP + -0x8]
0053ca31  MOV EDX,dword ptr [ECX]
0053ca33  MOV ECX,dword ptr [EBP + -0x8]
0053ca36  MOV EAX,dword ptr [EDX + 0xb0]
0053ca3c  CALL EAX
0053ca3e  MOVSX ECX,word ptr [EBP + -0x4]
0053ca42  PUSH ECX
0053ca43  PUSH 0x1
0053ca45  MOV EDX,dword ptr [EBP + -0x20]
0053ca48  MOV EAX,dword ptr [EDX]
0053ca4a  MOV ECX,dword ptr [EBP + -0x20]
0053ca4d  MOV EDX,dword ptr [EAX + 0x8]
0053ca50  CALL EDX
0053ca52  JMP 0x0053cc97
0053ca57  MOV AX,[0x007933e4]
0053ca5d  ADD AX,0x1
0053ca61  MOV [0x007933e4],AX
0053ca67  MOVSX ECX,word ptr [0x007933e4]
0053ca6e  MOVSX EDX,word ptr [0x007933dc]
0053ca75  CMP ECX,EDX
0053ca77  JG 0x0053ca91
0053ca79  MOVSX EAX,word ptr [0x007933e4]
0053ca80  PUSH EAX
0053ca81  MOV ECX,dword ptr [EBP + -0xc]
0053ca84  MOV EDX,dword ptr [ECX]
0053ca86  MOV ECX,dword ptr [EBP + -0xc]
0053ca89  MOV EAX,dword ptr [EDX + 0xb0]
0053ca8f  CALL EAX
0053ca91  MOVSX ECX,word ptr [0x007933e4]
0053ca98  MOVSX EDX,word ptr [0x007933d8]
0053ca9f  CMP ECX,EDX
0053caa1  JG 0x0053cabb
0053caa3  MOVSX EAX,word ptr [0x007933e4]
0053caaa  PUSH EAX
0053caab  MOV ECX,dword ptr [EBP + -0x8]
0053caae  MOV EDX,dword ptr [ECX]
0053cab0  MOV ECX,dword ptr [EBP + -0x8]
0053cab3  MOV EAX,dword ptr [EDX + 0xb0]
0053cab9  CALL EAX
0053cabb  MOVSX ECX,word ptr [0x007933e4]
0053cac2  CMP ECX,0x9
0053cac5  JNZ 0x0053cb0e
0053cac7  MOV EDX,dword ptr [0x007933f4]
0053cacd  MOV EAX,dword ptr [EDX + 0x9c]
0053cad3  MOV ECX,dword ptr [0x007933f4]
0053cad9  MOV ECX,dword ptr [ECX + 0x9c]
0053cadf  MOV EDX,dword ptr [EAX]
0053cae1  MOV EAX,dword ptr [EDX + 0x70]
0053cae4  CALL EAX
0053cae6  PUSH 0x0
0053cae8  MOV ECX,dword ptr [0x007933f4]
0053caee  MOV EDX,dword ptr [ECX + 0x9c]
0053caf4  MOV EAX,[0x007933f4]
0053caf9  MOV ECX,dword ptr [EAX + 0x9c]
0053caff  MOV EDX,dword ptr [EDX]
0053cb01  MOV EAX,dword ptr [EDX + 0xb0]
0053cb07  CALL EAX
0053cb09  JMP 0x0053cc14
0053cb0e  MOV ECX,dword ptr [EBP + -0x20]
0053cb11  CMP dword ptr [ECX + 0x20],0x0
0053cb15  JZ 0x0053cb20
0053cb17  MOV EDX,dword ptr [EBP + -0x20]
0053cb1a  CMP dword ptr [EDX + 0x20],0x2
0053cb1e  JNZ 0x0053cb4f
0053cb20  MOVSX EAX,word ptr [0x007933e4]
0053cb27  CMP EAX,0x11
0053cb2a  JNZ 0x0053cb4f
0053cb2c  PUSH 0x33
0053cb2e  MOV ECX,dword ptr [EBP + -0xc]
0053cb31  MOV EDX,dword ptr [ECX]
0053cb33  MOV ECX,dword ptr [EBP + -0xc]
0053cb36  MOV EAX,dword ptr [EDX + 0x6c]
0053cb39  CALL EAX
0053cb3b  PUSH 0x32
0053cb3d  MOV ECX,dword ptr [EBP + -0x8]
0053cb40  MOV EDX,dword ptr [ECX]
0053cb42  MOV ECX,dword ptr [EBP + -0x8]
0053cb45  MOV EAX,dword ptr [EDX + 0x6c]
0053cb48  CALL EAX
0053cb4a  JMP 0x0053cc14
0053cb4f  MOVSX ECX,word ptr [0x007933e4]
0053cb56  MOV EDX,dword ptr [EBP + -0x20]
0053cb59  MOV EAX,dword ptr [EDX + 0x20]
0053cb5c  MOVSX EDX,word ptr [EBP + EAX*0x2 + -0x1c]
0053cb61  CMP ECX,EDX
0053cb63  JLE 0x0053cc14
0053cb69  MOVSX EAX,word ptr [0x007933e0]
0053cb70  CMP EAX,0x7
0053cb73  JGE 0x0053cc14
0053cb79  MOVSX ECX,word ptr [0x007933e0]
0053cb80  CMP ECX,0x3
0053cb83  JGE 0x0053cbf3
0053cb85  MOVSX EDX,word ptr [0x007933e0]
0053cb8c  CMP EDX,0x2
0053cb8f  JNZ 0x0053cbb3
0053cb91  MOV EAX,[0x007933ec]
0053cb96  MOV ECX,dword ptr [EAX + 0x4]
0053cb99  CALL 0x006436c0
0053cb9e  PUSH EAX
0053cb9f  MOV ECX,dword ptr [EBP + -0x20]
0053cba2  MOV EDX,dword ptr [ECX + 0x20]
0053cba5  PUSH EDX
0053cba6  MOV ECX,dword ptr [0x007933ec]
0053cbac  CALL 0x00540bd0
0053cbb1  JMP 0x0053cbf3
0053cbb3  MOV EAX,[0x007933ec]
0053cbb8  MOV ECX,dword ptr [EAX + 0x4]
0053cbbb  CALL 0x006436c0
0053cbc0  PUSH EAX
0053cbc1  MOV ECX,dword ptr [EBP + -0x20]
0053cbc4  MOV EDX,dword ptr [ECX + 0x20]
0053cbc7  PUSH EDX
0053cbc8  MOV ECX,dword ptr [0x007933ec]
0053cbce  CALL 0x00540bd0
0053cbd3  MOV EAX,[0x007933ec]
0053cbd8  MOV ECX,dword ptr [EAX + 0x4]
0053cbdb  CALL 0x006436c0
0053cbe0  PUSH EAX
0053cbe1  MOV ECX,dword ptr [EBP + -0x20]
0053cbe4  MOV EDX,dword ptr [ECX + 0x20]
0053cbe7  PUSH EDX
0053cbe8  MOV ECX,dword ptr [0x007933ec]
0053cbee  CALL 0x00540bd0
0053cbf3  MOV ECX,dword ptr [0x007933f4]
0053cbf9  CALL 0x0053b1a0
0053cbfe  MOVSX EAX,word ptr [0x007933e0]
0053cc05  ADD EAX,0x2
0053cc08  MOV [0x007933e0],AX
0053cc0e  MOV word ptr [EBP + -0x4],0x2
0053cc14  MOVSX ECX,word ptr [0x007933e4]
0053cc1b  MOVSX EDX,word ptr [0x007933dc]
0053cc22  CMP ECX,EDX
0053cc24  JL 0x0053cc38
0053cc26  MOVSX EAX,word ptr [0x007933e4]
0053cc2d  MOVSX ECX,word ptr [0x007933d8]
0053cc34  CMP EAX,ECX
0053cc36  JGE 0x0053cc49
0053cc38  PUSH 0x1
0053cc3a  MOV EDX,dword ptr [EBP + -0x20]
0053cc3d  MOV EAX,dword ptr [EDX]
0053cc3f  MOV ECX,dword ptr [EBP + -0x20]
0053cc42  MOV EDX,dword ptr [EAX + 0x4]
0053cc45  CALL EDX
0053cc47  JMP 0x0053cc58
0053cc49  PUSH 0x2
0053cc4b  MOV EAX,dword ptr [EBP + -0x20]
0053cc4e  MOV EDX,dword ptr [EAX]
0053cc50  MOV ECX,dword ptr [EBP + -0x20]
0053cc53  MOV EAX,dword ptr [EDX + 0x4]
0053cc56  CALL EAX
0053cc58  MOVSX ECX,word ptr [EBP + -0x4]
0053cc5c  PUSH ECX
0053cc5d  MOV EDX,dword ptr [EBP + -0x20]
0053cc60  MOV EAX,dword ptr [EDX]
0053cc62  MOV ECX,dword ptr [EBP + -0x20]
0053cc65  MOV EDX,dword ptr [EAX + 0x1c]
0053cc68  CALL EDX
0053cc6a  JMP 0x0053cc97
0053cc6c  MOV EAX,dword ptr [EBP + -0x20]
0053cc6f  CMP dword ptr [EAX + 0x10],0x0
0053cc73  JZ 0x0053cc8a
0053cc75  PUSH 0x0
0053cc77  MOV ECX,dword ptr [EBP + -0x20]
0053cc7a  MOV EDX,dword ptr [ECX + 0x10]
0053cc7d  MOV EAX,dword ptr [EBP + -0x20]
0053cc80  MOV ECX,dword ptr [EAX + 0x10]
0053cc83  MOV EDX,dword ptr [EDX]
0053cc85  MOV EAX,dword ptr [EDX + 0x1c]
0053cc88  CALL EAX
0053cc8a  PUSH 0x0
0053cc8c  MOV ECX,dword ptr [EBP + -0x20]
0053cc8f  MOV ECX,dword ptr [ECX + 0x10]
0053cc92  CALL 0x005fc420
0053cc97  MOV ECX,dword ptr [EBP + -0x10]
0053cc9a  XOR ECX,EBP
0053cc9c  CALL 0x00686d72
0053cca1  MOV ESP,EBP
0053cca3  POP EBP
0053cca4  RET
