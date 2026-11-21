; FUN_0061d800  0061d800
0061d800  PUSH EBP
0061d801  MOV EBP,ESP
0061d803  SUB ESP,0x24
0061d806  LEA EAX,[EBP + 0xc]
0061d809  MOV dword ptr [EBP + -0x4],EAX
0061d80c  MOV ECX,dword ptr [EBP + 0x8]
0061d80f  MOV dword ptr [EBP + -0x8],ECX
0061d812  CMP dword ptr [EBP + 0x10],0xff
0061d819  JZ 0x0061d94e
0061d81f  MOV EDX,dword ptr [EBP + -0x8]
0061d822  MOVZX EAX,byte ptr [EDX]
0061d825  CMP EAX,0x80
0061d82a  JG 0x0061d837
0061d82c  MOV ECX,dword ptr [EBP + -0x8]
0061d82f  MOVZX EDX,byte ptr [ECX]
0061d832  MOV dword ptr [EBP + -0x10],EDX
0061d835  JMP 0x0061d847
0061d837  MOV EAX,dword ptr [EBP + -0x8]
0061d83a  MOVZX ECX,byte ptr [EAX]
0061d83d  MOV EDX,0xff
0061d842  SUB EDX,ECX
0061d844  MOV dword ptr [EBP + -0x10],EDX
0061d847  MOV EAX,dword ptr [EBP + -0x8]
0061d84a  MOVZX ECX,byte ptr [EAX]
0061d84d  MOV EDX,dword ptr [EBP + -0x4]
0061d850  MOVZX EAX,byte ptr [EDX]
0061d853  SUB EAX,0x80
0061d858  MOV EDX,dword ptr [EBP + -0x10]
0061d85b  IMUL EDX,dword ptr [EBP + 0x10]
0061d85f  SAR EDX,0x8
0061d862  IMUL EAX,EDX
0061d865  SAR EAX,0x7
0061d868  ADD ECX,EAX
0061d86a  MOV dword ptr [EBP + -0xc],ECX
0061d86d  MOV EAX,dword ptr [EBP + -0x8]
0061d870  MOV CL,byte ptr [EBP + -0xc]
0061d873  MOV byte ptr [EAX],CL
0061d875  MOV EDX,dword ptr [EBP + -0x4]
0061d878  ADD EDX,0x1
0061d87b  MOV dword ptr [EBP + -0x4],EDX
0061d87e  MOV EAX,dword ptr [EBP + -0x8]
0061d881  ADD EAX,0x1
0061d884  MOV dword ptr [EBP + -0x8],EAX
0061d887  MOV ECX,dword ptr [EBP + -0x8]
0061d88a  MOVZX EDX,byte ptr [ECX]
0061d88d  CMP EDX,0x80
0061d893  JG 0x0061d8a0
0061d895  MOV EAX,dword ptr [EBP + -0x8]
0061d898  MOVZX ECX,byte ptr [EAX]
0061d89b  MOV dword ptr [EBP + -0x14],ECX
0061d89e  JMP 0x0061d8b0
0061d8a0  MOV EDX,dword ptr [EBP + -0x8]
0061d8a3  MOVZX EAX,byte ptr [EDX]
0061d8a6  MOV ECX,0xff
0061d8ab  SUB ECX,EAX
0061d8ad  MOV dword ptr [EBP + -0x14],ECX
0061d8b0  MOV EDX,dword ptr [EBP + -0x8]
0061d8b3  MOVZX EAX,byte ptr [EDX]
0061d8b6  MOV ECX,dword ptr [EBP + -0x4]
0061d8b9  MOVZX EDX,byte ptr [ECX]
0061d8bc  SUB EDX,0x80
0061d8c2  MOV ECX,dword ptr [EBP + -0x14]
0061d8c5  IMUL ECX,dword ptr [EBP + 0x10]
0061d8c9  SAR ECX,0x8
0061d8cc  IMUL EDX,ECX
0061d8cf  SAR EDX,0x7
0061d8d2  ADD EAX,EDX
0061d8d4  MOV dword ptr [EBP + -0xc],EAX
0061d8d7  MOV EDX,dword ptr [EBP + -0x8]
0061d8da  MOV AL,byte ptr [EBP + -0xc]
0061d8dd  MOV byte ptr [EDX],AL
0061d8df  MOV ECX,dword ptr [EBP + -0x4]
0061d8e2  ADD ECX,0x1
0061d8e5  MOV dword ptr [EBP + -0x4],ECX
0061d8e8  MOV EDX,dword ptr [EBP + -0x8]
0061d8eb  ADD EDX,0x1
0061d8ee  MOV dword ptr [EBP + -0x8],EDX
0061d8f1  MOV EAX,dword ptr [EBP + -0x8]
0061d8f4  MOVZX ECX,byte ptr [EAX]
0061d8f7  CMP ECX,0x80
0061d8fd  JG 0x0061d90a
0061d8ff  MOV EDX,dword ptr [EBP + -0x8]
0061d902  MOVZX EAX,byte ptr [EDX]
0061d905  MOV dword ptr [EBP + -0x18],EAX
0061d908  JMP 0x0061d91a
0061d90a  MOV ECX,dword ptr [EBP + -0x8]
0061d90d  MOVZX EDX,byte ptr [ECX]
0061d910  MOV EAX,0xff
0061d915  SUB EAX,EDX
0061d917  MOV dword ptr [EBP + -0x18],EAX
0061d91a  MOV ECX,dword ptr [EBP + -0x8]
0061d91d  MOVZX EDX,byte ptr [ECX]
0061d920  MOV EAX,dword ptr [EBP + -0x4]
0061d923  MOVZX ECX,byte ptr [EAX]
0061d926  SUB ECX,0x80
0061d92c  MOV EAX,dword ptr [EBP + -0x18]
0061d92f  IMUL EAX,dword ptr [EBP + 0x10]
0061d933  SAR EAX,0x8
0061d936  IMUL ECX,EAX
0061d939  SAR ECX,0x7
0061d93c  ADD EDX,ECX
0061d93e  MOV dword ptr [EBP + -0xc],EDX
0061d941  MOV ECX,dword ptr [EBP + -0x8]
0061d944  MOV DL,byte ptr [EBP + -0xc]
0061d947  MOV byte ptr [ECX],DL
0061d949  JMP 0x0061da5f
0061d94e  MOV EAX,dword ptr [EBP + -0x8]
0061d951  MOVZX ECX,byte ptr [EAX]
0061d954  CMP ECX,0x80
0061d95a  JG 0x0061d967
0061d95c  MOV EDX,dword ptr [EBP + -0x8]
0061d95f  MOVZX EAX,byte ptr [EDX]
0061d962  MOV dword ptr [EBP + -0x1c],EAX
0061d965  JMP 0x0061d977
0061d967  MOV ECX,dword ptr [EBP + -0x8]
0061d96a  MOVZX EDX,byte ptr [ECX]
0061d96d  MOV EAX,0xff
0061d972  SUB EAX,EDX
0061d974  MOV dword ptr [EBP + -0x1c],EAX
0061d977  MOV ECX,dword ptr [EBP + -0x8]
0061d97a  MOVZX EDX,byte ptr [ECX]
0061d97d  MOV EAX,dword ptr [EBP + -0x4]
0061d980  MOVZX ECX,byte ptr [EAX]
0061d983  SUB ECX,0x80
0061d989  IMUL ECX,dword ptr [EBP + -0x1c]
0061d98d  SAR ECX,0x7
0061d990  ADD EDX,ECX
0061d992  MOV dword ptr [EBP + -0xc],EDX
0061d995  MOV EDX,dword ptr [EBP + -0x8]
0061d998  MOV AL,byte ptr [EBP + -0xc]
0061d99b  MOV byte ptr [EDX],AL
0061d99d  MOV ECX,dword ptr [EBP + -0x4]
0061d9a0  ADD ECX,0x1
0061d9a3  MOV dword ptr [EBP + -0x4],ECX
0061d9a6  MOV EDX,dword ptr [EBP + -0x8]
0061d9a9  ADD EDX,0x1
0061d9ac  MOV dword ptr [EBP + -0x8],EDX
0061d9af  MOV EAX,dword ptr [EBP + -0x8]
0061d9b2  MOVZX ECX,byte ptr [EAX]
0061d9b5  CMP ECX,0x80
0061d9bb  JG 0x0061d9c8
0061d9bd  MOV EDX,dword ptr [EBP + -0x8]
0061d9c0  MOVZX EAX,byte ptr [EDX]
0061d9c3  MOV dword ptr [EBP + -0x20],EAX
0061d9c6  JMP 0x0061d9d8
0061d9c8  MOV ECX,dword ptr [EBP + -0x8]
0061d9cb  MOVZX EDX,byte ptr [ECX]
0061d9ce  MOV EAX,0xff
0061d9d3  SUB EAX,EDX
0061d9d5  MOV dword ptr [EBP + -0x20],EAX
0061d9d8  MOV ECX,dword ptr [EBP + -0x8]
0061d9db  MOVZX EDX,byte ptr [ECX]
0061d9de  MOV EAX,dword ptr [EBP + -0x4]
0061d9e1  MOVZX ECX,byte ptr [EAX]
0061d9e4  SUB ECX,0x80
0061d9ea  IMUL ECX,dword ptr [EBP + -0x20]
0061d9ee  SAR ECX,0x7
0061d9f1  ADD EDX,ECX
0061d9f3  MOV dword ptr [EBP + -0xc],EDX
0061d9f6  MOV EDX,dword ptr [EBP + -0x8]
0061d9f9  MOV AL,byte ptr [EBP + -0xc]
0061d9fc  MOV byte ptr [EDX],AL
0061d9fe  MOV ECX,dword ptr [EBP + -0x4]
0061da01  ADD ECX,0x1
0061da04  MOV dword ptr [EBP + -0x4],ECX
0061da07  MOV EDX,dword ptr [EBP + -0x8]
0061da0a  ADD EDX,0x1
0061da0d  MOV dword ptr [EBP + -0x8],EDX
0061da10  MOV EAX,dword ptr [EBP + -0x8]
0061da13  MOVZX ECX,byte ptr [EAX]
0061da16  CMP ECX,0x80
0061da1c  JG 0x0061da29
0061da1e  MOV EDX,dword ptr [EBP + -0x8]
0061da21  MOVZX EAX,byte ptr [EDX]
0061da24  MOV dword ptr [EBP + -0x24],EAX
0061da27  JMP 0x0061da39
0061da29  MOV ECX,dword ptr [EBP + -0x8]
0061da2c  MOVZX EDX,byte ptr [ECX]
0061da2f  MOV EAX,0xff
0061da34  SUB EAX,EDX
0061da36  MOV dword ptr [EBP + -0x24],EAX
0061da39  MOV ECX,dword ptr [EBP + -0x8]
0061da3c  MOVZX EDX,byte ptr [ECX]
0061da3f  MOV EAX,dword ptr [EBP + -0x4]
0061da42  MOVZX ECX,byte ptr [EAX]
0061da45  SUB ECX,0x80
0061da4b  IMUL ECX,dword ptr [EBP + -0x24]
0061da4f  SAR ECX,0x7
0061da52  ADD EDX,ECX
0061da54  MOV dword ptr [EBP + -0xc],EDX
0061da57  MOV EDX,dword ptr [EBP + -0x8]
0061da5a  MOV AL,byte ptr [EBP + -0xc]
0061da5d  MOV byte ptr [EDX],AL
0061da5f  MOV ESP,EBP
0061da61  POP EBP
0061da62  RET
