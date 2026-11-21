; FUN_005a2b10  005a2b10
005a2b10  PUSH EBP
005a2b11  MOV EBP,ESP
005a2b13  SUB ESP,0x16c
005a2b19  MOV EAX,[0x00781870]
005a2b1e  XOR EAX,EBP
005a2b20  MOV dword ptr [EBP + -0xc],EAX
005a2b23  MOV dword ptr [EBP + 0xfffffeb8],ECX
005a2b29  CMP dword ptr [EBP + 0x8],0x5
005a2b2d  JNZ 0x005a2b34
005a2b2f  JMP 0x005a3620
005a2b34  MOV EAX,dword ptr [EBP + 0x8]
005a2b37  IMUL EAX,EAX,0x3
005a2b3a  MOV dword ptr [EBP + -0x8],EAX
005a2b3d  MOV dword ptr [EBP + -0x28],0xffffffff
005a2b44  MOV dword ptr [EBP + -0x2c],0xffffffff
005a2b4b  MOV byte ptr [EBP + -0x1],0x0
005a2b4f  PUSH 0x0
005a2b51  PUSH 0x0
005a2b53  CALL 0x0064c8a0
005a2b58  ADD ESP,0x8
005a2b5b  MOV dword ptr [EBP + 0xffffff74],EAX
005a2b61  MOV dword ptr [EBP + 0xffffff78],EDX
005a2b67  MOV ECX,dword ptr [EBP + 0xffffff78]
005a2b6d  PUSH ECX
005a2b6e  MOV EDX,dword ptr [EBP + 0xffffff74]
005a2b74  PUSH EDX
005a2b75  MOV EAX,dword ptr [EBP + 0x8]
005a2b78  PUSH EAX
005a2b79  CALL 0x005dcb00
005a2b7e  ADD ESP,0x4
005a2b81  MOV ECX,EAX
005a2b83  CALL 0x005d6050
005a2b88  MOV ECX,dword ptr [EBP + 0x8]
005a2b8b  PUSH ECX
005a2b8c  CALL 0x005dcb00
005a2b91  ADD ESP,0x4
005a2b94  MOV dword ptr [EBP + 0xfffffed8],EAX
005a2b9a  MOV ECX,dword ptr [EBP + 0xfffffed8]
005a2ba0  CALL 0x005d52e0
005a2ba5  MOV DL,byte ptr [EAX + 0x2a]
005a2ba8  MOV byte ptr [EBP + 0xfffffed7],DL
005a2bae  MOVSX EAX,byte ptr [EBP + 0xfffffed7]
005a2bb5  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005a2bbb  MOV dword ptr [ECX + 0x110],EAX
005a2bc1  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005a2bc7  MOV dword ptr [EDX + 0x114],0xffffffff
005a2bd1  MOV dword ptr [EBP + -0x30],0x0
005a2bd8  JMP 0x005a2be3
005a2bda  MOV EAX,dword ptr [EBP + -0x30]
005a2bdd  ADD EAX,0x1
005a2be0  MOV dword ptr [EBP + -0x30],EAX
005a2be3  CMP dword ptr [EBP + -0x30],0x5
005a2be7  JGE 0x005a2bf5
005a2be9  MOV ECX,dword ptr [EBP + -0x30]
005a2bec  MOV word ptr [EBP + ECX*0x2 + -0x18],0x0
005a2bf3  JMP 0x005a2bda
005a2bf5  LEA EDX,[EBP + -0x24]
005a2bf8  PUSH EDX
005a2bf9  PUSH 0x3
005a2bfb  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005a2c01  ADD EAX,0xe6
005a2c06  PUSH EAX
005a2c07  XOR ECX,ECX
005a2c09  CMP dword ptr [EBP + 0x8],0x4
005a2c0d  SETZ CL
005a2c10  ADD ECX,0x2
005a2c13  PUSH ECX
005a2c14  MOV EDX,dword ptr [EBP + 0x8]
005a2c17  IMUL EDX,EDX,0x6
005a2c1a  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005a2c20  LEA ECX,[EAX + EDX*0x1 + 0xc8]
005a2c27  PUSH ECX
005a2c28  CALL 0x00462930
005a2c2d  ADD ESP,0x14
005a2c30  LEA EDX,[EBP + -0x18]
005a2c33  PUSH EDX
005a2c34  PUSH 0x6
005a2c36  LEA EAX,[EBP + -0x24]
005a2c39  PUSH EAX
005a2c3a  PUSH 0x5
005a2c3c  CALL 0x00462a40
005a2c41  ADD ESP,0x10
005a2c44  MOV ECX,dword ptr [EBP + 0x8]
005a2c47  PUSH ECX
005a2c48  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005a2c4e  CALL 0x005a3660
005a2c53  MOVZX EDX,AL
005a2c56  TEST EDX,EDX
005a2c58  JZ 0x005a2f5f
005a2c5e  PUSH 0x0
005a2c60  PUSH 0x5
005a2c62  LEA EAX,[EBP + -0x18]
005a2c65  PUSH EAX
005a2c66  CALL 0x00462ba0
005a2c6b  ADD ESP,0xc
005a2c6e  MOV dword ptr [EBP + -0x2c],EAX
005a2c71  CMP dword ptr [EBP + -0x2c],0x2
005a2c75  JG 0x005a2c9c
005a2c77  CMP dword ptr [EBP + -0x2c],0x2
005a2c7b  JNZ 0x005a2c90
005a2c7d  PUSH 0x5
005a2c7f  LEA ECX,[EBP + -0x18]
005a2c82  PUSH ECX
005a2c83  CALL 0x004639e0
005a2c88  ADD ESP,0x8
005a2c8b  CMP EAX,0x8
005a2c8e  JGE 0x005a2c9c
005a2c90  MOV dword ptr [EBP + 0xfffffeb4],0x0
005a2c9a  JMP 0x005a2ca6
005a2c9c  MOV dword ptr [EBP + 0xfffffeb4],0x1
005a2ca6  MOV DL,byte ptr [EBP + 0xfffffeb4]
005a2cac  MOV byte ptr [EBP + -0x31],DL
005a2caf  MOVZX EAX,byte ptr [EBP + -0x31]
005a2cb3  TEST EAX,EAX
005a2cb5  JZ 0x005a2cd7
005a2cb7  PUSH 0x1
005a2cb9  MOV ECX,dword ptr [EBP + -0x2c]
005a2cbc  PUSH ECX
005a2cbd  PUSH 0x1
005a2cbf  MOV EDX,dword ptr [EBP + 0x8]
005a2cc2  PUSH EDX
005a2cc3  MOV EAX,dword ptr [EBP + -0x8]
005a2cc6  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005a2ccc  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x8]
005a2cd0  CALL 0x005a4390
005a2cd5  JMP 0x005a2cf5
005a2cd7  PUSH 0x0
005a2cd9  MOV EDX,dword ptr [EBP + -0x2c]
005a2cdc  PUSH EDX
005a2cdd  PUSH 0x0
005a2cdf  MOV EAX,dword ptr [EBP + 0x8]
005a2ce2  PUSH EAX
005a2ce3  MOV ECX,dword ptr [EBP + -0x8]
005a2ce6  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005a2cec  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x8]
005a2cf0  CALL 0x005a4390
005a2cf5  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005a2cfb  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005a2d01  MOV EDX,dword ptr [EAX + 0x110]
005a2d07  CMP EDX,dword ptr [ECX + 0x114]
005a2d0d  JZ 0x005a2d2a
005a2d0f  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005a2d15  CMP dword ptr [EAX + 0x114],0x0
005a2d1c  JNZ 0x005a2d2a
005a2d1e  MOV dword ptr [EBP + 0xfffffeb0],0x1
005a2d28  JMP 0x005a2d34
005a2d2a  MOV dword ptr [EBP + 0xfffffeb0],0x0
005a2d34  MOV CL,byte ptr [EBP + 0xfffffeb0]
005a2d3a  MOV byte ptr [EBP + -0x1],CL
005a2d3d  MOVZX EDX,byte ptr [EBP + -0x1]
005a2d41  TEST EDX,EDX
005a2d43  JZ 0x005a2dc4
005a2d45  PUSH 0xf4240
005a2d4a  PUSH 0x1
005a2d4c  MOV EAX,dword ptr [EBP + 0x8]
005a2d4f  PUSH EAX
005a2d50  CALL 0x005dcb00
005a2d55  ADD ESP,0x4
005a2d58  MOV ECX,EAX
005a2d5a  CALL 0x005d70e0
005a2d5f  MOV ECX,dword ptr [EBP + 0x8]
005a2d62  PUSH ECX
005a2d63  CALL 0x005dcb00
005a2d68  ADD ESP,0x4
005a2d6b  MOV dword ptr [EBP + 0xfffffeac],EAX
005a2d71  PUSH -0x1
005a2d73  MOV EDX,dword ptr [EBP + 0xfffffeac]
005a2d79  MOV EAX,dword ptr [EDX]
005a2d7b  MOV ECX,dword ptr [EBP + 0xfffffeac]
005a2d81  MOV EDX,dword ptr [EAX + 0x4]
005a2d84  CALL EDX
005a2d86  PUSH 0x0
005a2d88  PUSH 0x0
005a2d8a  CALL 0x0064c8a0
005a2d8f  ADD ESP,0x8
005a2d92  MOV dword ptr [EBP + 0xffffff6c],EAX
005a2d98  MOV dword ptr [EBP + 0xffffff70],EDX
005a2d9e  MOV EAX,dword ptr [EBP + 0xffffff70]
005a2da4  PUSH EAX
005a2da5  MOV ECX,dword ptr [EBP + 0xffffff6c]
005a2dab  PUSH ECX
005a2dac  MOV EDX,dword ptr [EBP + 0x8]
005a2daf  PUSH EDX
005a2db0  CALL 0x005dcb00
005a2db5  ADD ESP,0x4
005a2db8  MOV ECX,EAX
005a2dba  CALL 0x005d6050
005a2dbf  JMP 0x005a3620
005a2dc4  MOVZX EAX,byte ptr [EBP + -0x31]
005a2dc8  TEST EAX,EAX
005a2dca  JZ 0x005a2f5f
005a2dd0  PUSH 0x0
005a2dd2  PUSH 0x0
005a2dd4  CALL 0x0064c8a0
005a2dd9  ADD ESP,0x8
005a2ddc  MOV dword ptr [EBP + 0xffffff64],EAX
005a2de2  MOV dword ptr [EBP + 0xffffff68],EDX
005a2de8  MOV ECX,dword ptr [EBP + 0xffffff64]
005a2dee  MOV dword ptr [EBP + -0x44],ECX
005a2df1  MOV EDX,dword ptr [EBP + 0xffffff68]
005a2df7  MOV dword ptr [EBP + -0x40],EDX
005a2dfa  PUSH 0x0
005a2dfc  PUSH 0x0
005a2dfe  CALL 0x0064c8a0
005a2e03  ADD ESP,0x8
005a2e06  MOV dword ptr [EBP + 0xffffff5c],EAX
005a2e0c  MOV dword ptr [EBP + 0xffffff60],EDX
005a2e12  MOV EAX,dword ptr [EBP + 0xffffff5c]
005a2e18  MOV dword ptr [EBP + -0x4c],EAX
005a2e1b  MOV ECX,dword ptr [EBP + 0xffffff60]
005a2e21  MOV dword ptr [EBP + -0x48],ECX
005a2e24  PUSH 0x0
005a2e26  PUSH 0x0
005a2e28  CALL 0x0064c8a0
005a2e2d  ADD ESP,0x8
005a2e30  MOV dword ptr [EBP + 0xffffff54],EAX
005a2e36  MOV dword ptr [EBP + 0xffffff58],EDX
005a2e3c  MOV EDX,dword ptr [EBP + 0xffffff54]
005a2e42  MOV dword ptr [EBP + -0x3c],EDX
005a2e45  MOV EAX,dword ptr [EBP + 0xffffff58]
005a2e4b  MOV dword ptr [EBP + -0x38],EAX
005a2e4e  MOV ECX,dword ptr [EBP + -0x8]
005a2e51  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005a2e57  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x8]
005a2e5b  MOV dword ptr [EBP + 0xfffffed0],EAX
005a2e61  MOV ECX,dword ptr [EBP + 0x8]
005a2e64  SHL ECX,0x5
005a2e67  MOV EDX,dword ptr [EBP + 0xfffffed0]
005a2e6d  LEA EAX,[EDX + ECX*0x1 + 0x48]
005a2e71  XOR ECX,ECX
005a2e73  SHL ECX,0x3
005a2e76  MOV EDX,dword ptr [EAX + ECX*0x1]
005a2e79  MOV EAX,dword ptr [EAX + ECX*0x1 + 0x4]
005a2e7d  MOV dword ptr [EBP + -0x44],EDX
005a2e80  MOV dword ptr [EBP + -0x40],EAX
005a2e83  MOV ECX,dword ptr [EBP + -0x8]
005a2e86  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005a2e8c  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x8]
005a2e90  MOV dword ptr [EBP + 0xfffffecc],EAX
005a2e96  MOV ECX,dword ptr [EBP + 0x8]
005a2e99  SHL ECX,0x5
005a2e9c  MOV EDX,dword ptr [EBP + 0xfffffecc]
005a2ea2  LEA EAX,[EDX + ECX*0x1 + 0x48]
005a2ea6  MOV ECX,0x1
005a2eab  SHL ECX,0x3
005a2eae  MOV EDX,dword ptr [EAX + ECX*0x1]
005a2eb1  MOV EAX,dword ptr [EAX + ECX*0x1 + 0x4]
005a2eb5  MOV dword ptr [EBP + -0x4c],EDX
005a2eb8  MOV dword ptr [EBP + -0x48],EAX
005a2ebb  MOV ECX,dword ptr [EBP + -0x48]
005a2ebe  PUSH ECX
005a2ebf  MOV EDX,dword ptr [EBP + -0x4c]
005a2ec2  PUSH EDX
005a2ec3  LEA EAX,[EBP + 0xffffff4c]
005a2ec9  PUSH EAX
005a2eca  LEA ECX,[EBP + -0x44]
005a2ecd  CALL 0x0064c5c0
005a2ed2  MOV ECX,dword ptr [EAX]
005a2ed4  MOV EDX,dword ptr [EAX + 0x4]
005a2ed7  MOV dword ptr [EBP + -0x3c],ECX
005a2eda  MOV dword ptr [EBP + -0x38],EDX
005a2edd  PUSH 0x0
005a2edf  MOV EAX,dword ptr [EBP + 0x8]
005a2ee2  PUSH EAX
005a2ee3  MOV ECX,dword ptr [EBP + -0x38]
005a2ee6  PUSH ECX
005a2ee7  MOV EDX,dword ptr [EBP + -0x3c]
005a2eea  PUSH EDX
005a2eeb  MOV EAX,dword ptr [EBP + -0x8]
005a2eee  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005a2ef4  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x8]
005a2ef8  MOV EAX,dword ptr [EBP + -0x8]
005a2efb  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005a2f01  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x8]
005a2f05  MOV EDX,dword ptr [EDX]
005a2f07  MOV EAX,dword ptr [EDX + 0xb8]
005a2f0d  CALL EAX
005a2f0f  PUSH 0x0
005a2f11  PUSH 0x0
005a2f13  CALL 0x0064c8a0
005a2f18  ADD ESP,0x8
005a2f1b  MOV dword ptr [EBP + 0xffffff44],EAX
005a2f21  MOV dword ptr [EBP + 0xffffff48],EDX
005a2f27  PUSH 0x1
005a2f29  MOV ECX,dword ptr [EBP + 0x8]
005a2f2c  PUSH ECX
005a2f2d  MOV EDX,dword ptr [EBP + 0xffffff48]
005a2f33  PUSH EDX
005a2f34  MOV EAX,dword ptr [EBP + 0xffffff44]
005a2f3a  PUSH EAX
005a2f3b  MOV ECX,dword ptr [EBP + -0x8]
005a2f3e  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005a2f44  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x8]
005a2f48  MOV ECX,dword ptr [EBP + -0x8]
005a2f4b  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005a2f51  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x8]
005a2f55  MOV EAX,dword ptr [EAX]
005a2f57  MOV EDX,dword ptr [EAX + 0xb8]
005a2f5d  CALL EDX
005a2f5f  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005a2f65  ADD EAX,dword ptr [EBP + 0x8]
005a2f68  MOVZX ECX,byte ptr [EAX + 0xfb]
005a2f6f  TEST ECX,ECX
005a2f71  JZ 0x005a3256
005a2f77  PUSH 0x0
005a2f79  PUSH 0x5
005a2f7b  LEA EDX,[EBP + -0x18]
005a2f7e  PUSH EDX
005a2f7f  CALL 0x00462ba0
005a2f84  ADD ESP,0xc
005a2f87  MOV dword ptr [EBP + -0x2c],EAX
005a2f8a  XOR EAX,EAX
005a2f8c  CMP dword ptr [EBP + -0x2c],0x9
005a2f90  SETGE AL
005a2f93  MOV byte ptr [EBP + -0x4d],AL
005a2f96  MOVZX ECX,byte ptr [EBP + -0x4d]
005a2f9a  TEST ECX,ECX
005a2f9c  JZ 0x005a2fbc
005a2f9e  PUSH 0x1
005a2fa0  MOV EDX,dword ptr [EBP + -0x2c]
005a2fa3  PUSH EDX
005a2fa4  PUSH 0x1
005a2fa6  MOV EAX,dword ptr [EBP + 0x8]
005a2fa9  PUSH EAX
005a2faa  MOV ECX,dword ptr [EBP + -0x8]
005a2fad  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005a2fb3  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xc]
005a2fb7  CALL 0x005a4390
005a2fbc  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005a2fc2  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005a2fc8  MOV EDX,dword ptr [EAX + 0x110]
005a2fce  CMP EDX,dword ptr [ECX + 0x114]
005a2fd4  JZ 0x005a2ff1
005a2fd6  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005a2fdc  CMP dword ptr [EAX + 0x114],0x0
005a2fe3  JNZ 0x005a2ff1
005a2fe5  MOV dword ptr [EBP + 0xfffffea8],0x1
005a2fef  JMP 0x005a2ffb
005a2ff1  MOV dword ptr [EBP + 0xfffffea8],0x0
005a2ffb  MOV CL,byte ptr [EBP + 0xfffffea8]
005a3001  MOV byte ptr [EBP + -0x1],CL
005a3004  MOVZX EDX,byte ptr [EBP + -0x1]
005a3008  TEST EDX,EDX
005a300a  JZ 0x005a308b
005a300c  PUSH 0xf4240
005a3011  PUSH 0x1
005a3013  MOV EAX,dword ptr [EBP + 0x8]
005a3016  PUSH EAX
005a3017  CALL 0x005dcb00
005a301c  ADD ESP,0x4
005a301f  MOV ECX,EAX
005a3021  CALL 0x005d70e0
005a3026  MOV ECX,dword ptr [EBP + 0x8]
005a3029  PUSH ECX
005a302a  CALL 0x005dcb00
005a302f  ADD ESP,0x4
005a3032  MOV dword ptr [EBP + 0xfffffea4],EAX
005a3038  PUSH -0x1
005a303a  MOV EDX,dword ptr [EBP + 0xfffffea4]
005a3040  MOV EAX,dword ptr [EDX]
005a3042  MOV ECX,dword ptr [EBP + 0xfffffea4]
005a3048  MOV EDX,dword ptr [EAX + 0x4]
005a304b  CALL EDX
005a304d  PUSH 0x0
005a304f  PUSH 0x0
005a3051  CALL 0x0064c8a0
005a3056  ADD ESP,0x8
005a3059  MOV dword ptr [EBP + 0xffffff3c],EAX
005a305f  MOV dword ptr [EBP + 0xffffff40],EDX
005a3065  MOV EAX,dword ptr [EBP + 0xffffff40]
005a306b  PUSH EAX
005a306c  MOV ECX,dword ptr [EBP + 0xffffff3c]
005a3072  PUSH ECX
005a3073  MOV EDX,dword ptr [EBP + 0x8]
005a3076  PUSH EDX
005a3077  CALL 0x005dcb00
005a307c  ADD ESP,0x4
005a307f  MOV ECX,EAX
005a3081  CALL 0x005d6050
005a3086  JMP 0x005a3620
005a308b  MOV EAX,dword ptr [EBP + 0x8]
005a308e  PUSH EAX
005a308f  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005a3095  CALL 0x005a2080
005a309a  MOV dword ptr [EBP + -0x28],EAX
005a309d  PUSH 0x0
005a309f  PUSH 0x0
005a30a1  MOV ECX,dword ptr [EBP + -0x28]
005a30a4  PUSH ECX
005a30a5  MOV EDX,dword ptr [EBP + 0x8]
005a30a8  PUSH EDX
005a30a9  MOV EAX,dword ptr [EBP + -0x8]
005a30ac  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005a30b2  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xc]
005a30b6  CALL 0x005a4390
005a30bb  MOVZX EDX,byte ptr [EBP + -0x4d]
005a30bf  TEST EDX,EDX
005a30c1  JZ 0x005a3256
005a30c7  PUSH 0x0
005a30c9  PUSH 0x0
005a30cb  CALL 0x0064c8a0
005a30d0  ADD ESP,0x8
005a30d3  MOV dword ptr [EBP + 0xffffff34],EAX
005a30d9  MOV dword ptr [EBP + 0xffffff38],EDX
005a30df  MOV EAX,dword ptr [EBP + 0xffffff34]
005a30e5  MOV dword ptr [EBP + -0x60],EAX
005a30e8  MOV ECX,dword ptr [EBP + 0xffffff38]
005a30ee  MOV dword ptr [EBP + -0x5c],ECX
005a30f1  PUSH 0x0
005a30f3  PUSH 0x0
005a30f5  CALL 0x0064c8a0
005a30fa  ADD ESP,0x8
005a30fd  MOV dword ptr [EBP + 0xffffff2c],EAX
005a3103  MOV dword ptr [EBP + 0xffffff30],EDX
005a3109  MOV EDX,dword ptr [EBP + 0xffffff2c]
005a310f  MOV dword ptr [EBP + -0x68],EDX
005a3112  MOV EAX,dword ptr [EBP + 0xffffff30]
005a3118  MOV dword ptr [EBP + -0x64],EAX
005a311b  PUSH 0x0
005a311d  PUSH 0x0
005a311f  CALL 0x0064c8a0
005a3124  ADD ESP,0x8
005a3127  MOV dword ptr [EBP + 0xffffff24],EAX
005a312d  MOV dword ptr [EBP + 0xffffff28],EDX
005a3133  MOV ECX,dword ptr [EBP + 0xffffff24]
005a3139  MOV dword ptr [EBP + -0x58],ECX
005a313c  MOV EDX,dword ptr [EBP + 0xffffff28]
005a3142  MOV dword ptr [EBP + -0x54],EDX
005a3145  MOV EAX,dword ptr [EBP + -0x8]
005a3148  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005a314e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xc]
005a3152  MOV dword ptr [EBP + 0xfffffec8],EDX
005a3158  MOV EAX,dword ptr [EBP + 0x8]
005a315b  SHL EAX,0x5
005a315e  MOV ECX,dword ptr [EBP + 0xfffffec8]
005a3164  LEA EDX,[ECX + EAX*0x1 + 0x48]
005a3168  XOR EAX,EAX
005a316a  SHL EAX,0x3
005a316d  MOV ECX,dword ptr [EDX + EAX*0x1]
005a3170  MOV EDX,dword ptr [EDX + EAX*0x1 + 0x4]
005a3174  MOV dword ptr [EBP + -0x60],ECX
005a3177  MOV dword ptr [EBP + -0x5c],EDX
005a317a  MOV EAX,dword ptr [EBP + -0x8]
005a317d  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005a3183  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xc]
005a3187  MOV dword ptr [EBP + 0xfffffec4],EDX
005a318d  MOV EAX,dword ptr [EBP + 0x8]
005a3190  SHL EAX,0x5
005a3193  MOV ECX,dword ptr [EBP + 0xfffffec4]
005a3199  LEA EDX,[ECX + EAX*0x1 + 0x48]
005a319d  MOV EAX,0x1
005a31a2  SHL EAX,0x3
005a31a5  MOV ECX,dword ptr [EDX + EAX*0x1]
005a31a8  MOV EDX,dword ptr [EDX + EAX*0x1 + 0x4]
005a31ac  MOV dword ptr [EBP + -0x68],ECX
005a31af  MOV dword ptr [EBP + -0x64],EDX
005a31b2  MOV EAX,dword ptr [EBP + -0x64]
005a31b5  PUSH EAX
005a31b6  MOV ECX,dword ptr [EBP + -0x68]
005a31b9  PUSH ECX
005a31ba  LEA EDX,[EBP + 0xffffff1c]
005a31c0  PUSH EDX
005a31c1  LEA ECX,[EBP + -0x60]
005a31c4  CALL 0x0064c5c0
005a31c9  MOV ECX,dword ptr [EAX]
005a31cb  MOV EDX,dword ptr [EAX + 0x4]
005a31ce  MOV dword ptr [EBP + -0x58],ECX
005a31d1  MOV dword ptr [EBP + -0x54],EDX
005a31d4  PUSH 0x0
005a31d6  MOV EAX,dword ptr [EBP + 0x8]
005a31d9  PUSH EAX
005a31da  MOV ECX,dword ptr [EBP + -0x54]
005a31dd  PUSH ECX
005a31de  MOV EDX,dword ptr [EBP + -0x58]
005a31e1  PUSH EDX
005a31e2  MOV EAX,dword ptr [EBP + -0x8]
005a31e5  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005a31eb  MOV EDX,dword ptr [ECX + EAX*0x4 + 0xc]
005a31ef  MOV EAX,dword ptr [EBP + -0x8]
005a31f2  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005a31f8  MOV ECX,dword ptr [ECX + EAX*0x4 + 0xc]
005a31fc  MOV EDX,dword ptr [EDX]
005a31fe  MOV EAX,dword ptr [EDX + 0xb8]
005a3204  CALL EAX
005a3206  PUSH 0x0
005a3208  PUSH 0x0
005a320a  CALL 0x0064c8a0
005a320f  ADD ESP,0x8
005a3212  MOV dword ptr [EBP + 0xffffff14],EAX
005a3218  MOV dword ptr [EBP + 0xffffff18],EDX
005a321e  PUSH 0x1
005a3220  MOV ECX,dword ptr [EBP + 0x8]
005a3223  PUSH ECX
005a3224  MOV EDX,dword ptr [EBP + 0xffffff18]
005a322a  PUSH EDX
005a322b  MOV EAX,dword ptr [EBP + 0xffffff14]
005a3231  PUSH EAX
005a3232  MOV ECX,dword ptr [EBP + -0x8]
005a3235  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005a323b  MOV EAX,dword ptr [EDX + ECX*0x4 + 0xc]
005a323f  MOV ECX,dword ptr [EBP + -0x8]
005a3242  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005a3248  MOV ECX,dword ptr [EDX + ECX*0x4 + 0xc]
005a324c  MOV EAX,dword ptr [EAX]
005a324e  MOV EDX,dword ptr [EAX + 0xb8]
005a3254  CALL EDX
005a3256  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005a325c  ADD EAX,dword ptr [EBP + 0x8]
005a325f  MOVZX ECX,byte ptr [EAX + 0xff]
005a3266  TEST ECX,ECX
005a3268  JZ 0x005a3556
005a326e  PUSH 0x0
005a3270  PUSH 0x5
005a3272  LEA EDX,[EBP + -0x18]
005a3275  PUSH EDX
005a3276  CALL 0x00462ba0
005a327b  ADD ESP,0xc
005a327e  MOV dword ptr [EBP + -0x2c],EAX
005a3281  XOR EAX,EAX
005a3283  CMP dword ptr [EBP + -0x2c],0x9
005a3287  SETGE AL
005a328a  MOV byte ptr [EBP + -0x69],AL
005a328d  MOVZX ECX,byte ptr [EBP + -0x69]
005a3291  TEST ECX,ECX
005a3293  JZ 0x005a32b3
005a3295  PUSH 0x1
005a3297  MOV EDX,dword ptr [EBP + -0x2c]
005a329a  PUSH EDX
005a329b  PUSH 0x1
005a329d  MOV EAX,dword ptr [EBP + 0x8]
005a32a0  PUSH EAX
005a32a1  MOV ECX,dword ptr [EBP + -0x8]
005a32a4  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005a32aa  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x10]
005a32ae  CALL 0x005a4390
005a32b3  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005a32b9  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005a32bf  MOV EDX,dword ptr [EAX + 0x110]
005a32c5  CMP EDX,dword ptr [ECX + 0x114]
005a32cb  JZ 0x005a32e8
005a32cd  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005a32d3  CMP dword ptr [EAX + 0x114],0x0
005a32da  JNZ 0x005a32e8
005a32dc  MOV dword ptr [EBP + 0xfffffea0],0x1
005a32e6  JMP 0x005a32f2
005a32e8  MOV dword ptr [EBP + 0xfffffea0],0x0
005a32f2  MOV CL,byte ptr [EBP + 0xfffffea0]
005a32f8  MOV byte ptr [EBP + -0x1],CL
005a32fb  MOVZX EDX,byte ptr [EBP + -0x1]
005a32ff  TEST EDX,EDX
005a3301  JZ 0x005a3382
005a3303  PUSH 0xf4240
005a3308  PUSH 0x1
005a330a  MOV EAX,dword ptr [EBP + 0x8]
005a330d  PUSH EAX
005a330e  CALL 0x005dcb00
005a3313  ADD ESP,0x4
005a3316  MOV ECX,EAX
005a3318  CALL 0x005d70e0
005a331d  MOV ECX,dword ptr [EBP + 0x8]
005a3320  PUSH ECX
005a3321  CALL 0x005dcb00
005a3326  ADD ESP,0x4
005a3329  MOV dword ptr [EBP + 0xfffffe9c],EAX
005a332f  PUSH -0x1
005a3331  MOV EDX,dword ptr [EBP + 0xfffffe9c]
005a3337  MOV EAX,dword ptr [EDX]
005a3339  MOV ECX,dword ptr [EBP + 0xfffffe9c]
005a333f  MOV EDX,dword ptr [EAX + 0x4]
005a3342  CALL EDX
005a3344  PUSH 0x0
005a3346  PUSH 0x0
005a3348  CALL 0x0064c8a0
005a334d  ADD ESP,0x8
005a3350  MOV dword ptr [EBP + 0xffffff0c],EAX
005a3356  MOV dword ptr [EBP + 0xffffff10],EDX
005a335c  MOV EAX,dword ptr [EBP + 0xffffff10]
005a3362  PUSH EAX
005a3363  MOV ECX,dword ptr [EBP + 0xffffff0c]
005a3369  PUSH ECX
005a336a  MOV EDX,dword ptr [EBP + 0x8]
005a336d  PUSH EDX
005a336e  CALL 0x005dcb00
005a3373  ADD ESP,0x4
005a3376  MOV ECX,EAX
005a3378  CALL 0x005d6050
005a337d  JMP 0x005a3620
005a3382  MOV EAX,dword ptr [EBP + 0x8]
005a3385  PUSH EAX
005a3386  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005a338c  CALL 0x005a2080
005a3391  MOV dword ptr [EBP + -0x28],EAX
005a3394  PUSH 0x0
005a3396  PUSH 0x0
005a3398  MOV ECX,dword ptr [EBP + -0x28]
005a339b  PUSH ECX
005a339c  MOV EDX,dword ptr [EBP + 0x8]
005a339f  PUSH EDX
005a33a0  MOV EAX,dword ptr [EBP + -0x8]
005a33a3  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005a33a9  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x10]
005a33ad  CALL 0x005a4390
005a33b2  MOVZX EDX,byte ptr [EBP + -0x69]
005a33b6  TEST EDX,EDX
005a33b8  JZ 0x005a3556
005a33be  PUSH 0x0
005a33c0  PUSH 0x0
005a33c2  CALL 0x0064c8a0
005a33c7  ADD ESP,0x8
005a33ca  MOV dword ptr [EBP + 0xffffff04],EAX
005a33d0  MOV dword ptr [EBP + 0xffffff08],EDX
005a33d6  MOV EAX,dword ptr [EBP + 0xffffff04]
005a33dc  MOV dword ptr [EBP + -0x7c],EAX
005a33df  MOV ECX,dword ptr [EBP + 0xffffff08]
005a33e5  MOV dword ptr [EBP + -0x78],ECX
005a33e8  PUSH 0x0
005a33ea  PUSH 0x0
005a33ec  CALL 0x0064c8a0
005a33f1  ADD ESP,0x8
005a33f4  MOV dword ptr [EBP + 0xfffffefc],EAX
005a33fa  MOV dword ptr [EBP + 0xffffff00],EDX
005a3400  MOV EDX,dword ptr [EBP + 0xfffffefc]
005a3406  MOV dword ptr [EBP + 0xffffff7c],EDX
005a340c  MOV EAX,dword ptr [EBP + 0xffffff00]
005a3412  MOV dword ptr [EBP + -0x80],EAX
005a3415  PUSH 0x0
005a3417  PUSH 0x0
005a3419  CALL 0x0064c8a0
005a341e  ADD ESP,0x8
005a3421  MOV dword ptr [EBP + 0xfffffef4],EAX
005a3427  MOV dword ptr [EBP + 0xfffffef8],EDX
005a342d  MOV ECX,dword ptr [EBP + 0xfffffef4]
005a3433  MOV dword ptr [EBP + -0x74],ECX
005a3436  MOV EDX,dword ptr [EBP + 0xfffffef8]
005a343c  MOV dword ptr [EBP + -0x70],EDX
005a343f  MOV EAX,dword ptr [EBP + -0x8]
005a3442  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005a3448  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x10]
005a344c  MOV dword ptr [EBP + 0xfffffec0],EDX
005a3452  MOV EAX,dword ptr [EBP + 0x8]
005a3455  SHL EAX,0x5
005a3458  MOV ECX,dword ptr [EBP + 0xfffffec0]
005a345e  LEA EDX,[ECX + EAX*0x1 + 0x48]
005a3462  XOR EAX,EAX
005a3464  SHL EAX,0x3
005a3467  MOV ECX,dword ptr [EDX + EAX*0x1]
005a346a  MOV EDX,dword ptr [EDX + EAX*0x1 + 0x4]
005a346e  MOV dword ptr [EBP + -0x7c],ECX
005a3471  MOV dword ptr [EBP + -0x78],EDX
005a3474  MOV EAX,dword ptr [EBP + -0x8]
005a3477  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005a347d  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x10]
005a3481  MOV dword ptr [EBP + 0xfffffebc],EDX
005a3487  MOV EAX,dword ptr [EBP + 0x8]
005a348a  SHL EAX,0x5
005a348d  MOV ECX,dword ptr [EBP + 0xfffffebc]
005a3493  LEA EDX,[ECX + EAX*0x1 + 0x48]
005a3497  MOV EAX,0x1
005a349c  SHL EAX,0x3
005a349f  MOV ECX,dword ptr [EDX + EAX*0x1]
005a34a2  MOV EDX,dword ptr [EDX + EAX*0x1 + 0x4]
005a34a6  MOV dword ptr [EBP + 0xffffff7c],ECX
005a34ac  MOV dword ptr [EBP + -0x80],EDX
005a34af  MOV EAX,dword ptr [EBP + -0x80]
005a34b2  PUSH EAX
005a34b3  MOV ECX,dword ptr [EBP + 0xffffff7c]
005a34b9  PUSH ECX
005a34ba  LEA EDX,[EBP + 0xfffffeec]
005a34c0  PUSH EDX
005a34c1  LEA ECX,[EBP + -0x7c]
005a34c4  CALL 0x0064c5c0
005a34c9  MOV ECX,dword ptr [EAX]
005a34cb  MOV EDX,dword ptr [EAX + 0x4]
005a34ce  MOV dword ptr [EBP + -0x74],ECX
005a34d1  MOV dword ptr [EBP + -0x70],EDX
005a34d4  PUSH 0x0
005a34d6  MOV EAX,dword ptr [EBP + 0x8]
005a34d9  PUSH EAX
005a34da  MOV ECX,dword ptr [EBP + -0x70]
005a34dd  PUSH ECX
005a34de  MOV EDX,dword ptr [EBP + -0x74]
005a34e1  PUSH EDX
005a34e2  MOV EAX,dword ptr [EBP + -0x8]
005a34e5  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005a34eb  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x10]
005a34ef  MOV EAX,dword ptr [EBP + -0x8]
005a34f2  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005a34f8  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x10]
005a34fc  MOV EDX,dword ptr [EDX]
005a34fe  MOV EAX,dword ptr [EDX + 0xb8]
005a3504  CALL EAX
005a3506  PUSH 0x0
005a3508  PUSH 0x0
005a350a  CALL 0x0064c8a0
005a350f  ADD ESP,0x8
005a3512  MOV dword ptr [EBP + 0xfffffee4],EAX
005a3518  MOV dword ptr [EBP + 0xfffffee8],EDX
005a351e  PUSH 0x1
005a3520  MOV ECX,dword ptr [EBP + 0x8]
005a3523  PUSH ECX
005a3524  MOV EDX,dword ptr [EBP + 0xfffffee8]
005a352a  PUSH EDX
005a352b  MOV EAX,dword ptr [EBP + 0xfffffee4]
005a3531  PUSH EAX
005a3532  MOV ECX,dword ptr [EBP + -0x8]
005a3535  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005a353b  MOV EAX,dword ptr [EDX + ECX*0x4 + 0x10]
005a353f  MOV ECX,dword ptr [EBP + -0x8]
005a3542  MOV EDX,dword ptr [EBP + 0xfffffeb8]
005a3548  MOV ECX,dword ptr [EDX + ECX*0x4 + 0x10]
005a354c  MOV EAX,dword ptr [EAX]
005a354e  MOV EDX,dword ptr [EAX + 0xb8]
005a3554  CALL EDX
005a3556  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005a355c  MOV ECX,dword ptr [EBP + 0xfffffeb8]
005a3562  MOV EDX,dword ptr [EAX + 0x110]
005a3568  CMP EDX,dword ptr [ECX + 0x114]
005a356e  JZ 0x005a358b
005a3570  MOV EAX,dword ptr [EBP + 0xfffffeb8]
005a3576  CMP dword ptr [EAX + 0x114],0x0
005a357d  JNZ 0x005a358b
005a357f  MOV dword ptr [EBP + 0xfffffe98],0x1
005a3589  JMP 0x005a3595
005a358b  MOV dword ptr [EBP + 0xfffffe98],0x0
005a3595  MOV CL,byte ptr [EBP + 0xfffffe98]
005a359b  MOV byte ptr [EBP + -0x1],CL
005a359e  MOVZX EDX,byte ptr [EBP + -0x1]
005a35a2  TEST EDX,EDX
005a35a4  JZ 0x005a3620
005a35a6  PUSH 0xf4240
005a35ab  PUSH 0x1
005a35ad  MOV EAX,dword ptr [EBP + 0x8]
005a35b0  PUSH EAX
005a35b1  CALL 0x005dcb00
005a35b6  ADD ESP,0x4
005a35b9  MOV ECX,EAX
005a35bb  CALL 0x005d70e0
005a35c0  MOV ECX,dword ptr [EBP + 0x8]
005a35c3  PUSH ECX
005a35c4  CALL 0x005dcb00
005a35c9  ADD ESP,0x4
005a35cc  MOV dword ptr [EBP + 0xfffffe94],EAX
005a35d2  PUSH -0x1
005a35d4  MOV EDX,dword ptr [EBP + 0xfffffe94]
005a35da  MOV EAX,dword ptr [EDX]
005a35dc  MOV ECX,dword ptr [EBP + 0xfffffe94]
005a35e2  MOV EDX,dword ptr [EAX + 0x4]
005a35e5  CALL EDX
005a35e7  PUSH 0x0
005a35e9  PUSH 0x0
005a35eb  CALL 0x0064c8a0
005a35f0  ADD ESP,0x8
005a35f3  MOV dword ptr [EBP + 0xfffffedc],EAX
005a35f9  MOV dword ptr [EBP + 0xfffffee0],EDX
005a35ff  MOV EAX,dword ptr [EBP + 0xfffffee0]
005a3605  PUSH EAX
005a3606  MOV ECX,dword ptr [EBP + 0xfffffedc]
005a360c  PUSH ECX
005a360d  MOV EDX,dword ptr [EBP + 0x8]
005a3610  PUSH EDX
005a3611  CALL 0x005dcb00
005a3616  ADD ESP,0x4
005a3619  MOV ECX,EAX
005a361b  CALL 0x005d6050
005a3620  MOV ECX,dword ptr [EBP + -0xc]
005a3623  XOR ECX,EBP
005a3625  CALL 0x00686d72
005a362a  MOV ESP,EBP
005a362c  POP EBP
005a362d  RET 0x4
