// FUN_00608db0  00608db0

int __thiscall
FUN_00608db0(int param_1,int *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  LPCSTR pszSound;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  HMODULE hmod;
  DWORD fdwSound;
  int local_20;
  int local_1c;
  int local_18 [2];
  int local_10;
  char local_9;
  int local_8;
  
  if (DAT_007960cb == '\0') {
    if (*(char *)(param_1 + 10) == '\0') {
      if ((*(char *)(param_1 + 9) == '\0') || (*(char *)(param_1 + 8) == '\0')) {
        local_10 = -1;
      }
      else {
        local_10 = FUN_00608aa0(param_3);
        if (local_10 == -1) {
          local_10 = -1;
        }
        else {
          *(int **)(&DAT_00796b40 + local_10 * 0x24) = param_2;
          *(undefined4 *)(&DAT_00796b48 + local_10 * 0x24) = param_3;
          *(undefined4 *)(&DAT_00796b54 + local_10 * 0x24) = 0;
          if (param_2[0xc] == 0x2047474f) {
            uVar2 = FUN_0061ed80();
            uVar2 = (**(code **)(*param_2 + 4))(uVar2);
            cVar1 = FUN_006091a0(*(undefined4 *)(&DAT_00796b38 + local_10 * 0x24),uVar2);
            bVar4 = cVar1 != '\0';
          }
          else if (param_2[0xc] == 0x2033504d) {
            bVar4 = false;
          }
          else {
            uVar2 = (**(code **)(*param_2 + 4))();
            cVar1 = FUN_00609100(*(undefined4 *)(&DAT_00796b38 + local_10 * 0x24),uVar2);
            bVar4 = cVar1 != '\0';
          }
          if (bVar4) {
            local_8 = 0;
            local_20 = 0;
            local_1c = 0;
            local_18[0] = 0;
            alGetBufferi(*(undefined4 *)(&DAT_00796b38 + local_10 * 0x24),0x2001,&local_8);
            alGetBufferi(*(undefined4 *)(&DAT_00796b38 + local_10 * 0x24),0x2004,&local_20);
            alGetBufferi(*(undefined4 *)(&DAT_00796b38 + local_10 * 0x24),0x2002,&local_1c);
            alGetBufferi(*(undefined4 *)(&DAT_00796b38 + local_10 * 0x24),0x2003,local_18);
            *(int *)(&DAT_00796b58 + local_10 * 0x24) =
                 (((local_20 / (local_8 / 100)) / ((int)(local_1c + (local_1c >> 0x1f & 7U)) >> 3))
                 / local_18[0]) * 10;
            local_9 = param_4 == 0;
            alSourcei(*(undefined4 *)(&DAT_00796b3c + local_10 * 0x24),0x1009,
                      *(undefined4 *)(&DAT_00796b38 + local_10 * 0x24));
            alSourcei(*(undefined4 *)(&DAT_00796b3c + local_10 * 0x24),0x1007,(int)local_9);
            *(undefined4 *)(&DAT_00796b50 + local_10 * 0x24) = param_5;
            alSourcef(*(undefined4 *)(&DAT_00796b3c + local_10 * 0x24),0x100a,param_5);
            iVar3 = alGetError();
            if (iVar3 != 0) {
              FUN_005e9f20("false","..\\scilib\\platform\\VSoundManager.cpp",0x369);
            }
            uVar2 = (**(code **)(**(int **)(DAT_007960d8 + 0xc) + 8))();
            *(undefined4 *)(&DAT_00796b54 + local_10 * 0x24) = uVar2;
            alSourcePlay(*(undefined4 *)(&DAT_00796b3c + local_10 * 0x24));
            iVar3 = alGetError();
            if (iVar3 != 0) {
              local_10 = -1;
            }
          }
          else {
            FUN_0062fde0("PlaySoundResource() Failed!\n");
            local_10 = -1;
          }
        }
      }
    }
    else {
      if ((param_2[0xc] != 0x2033504d) && (param_2[0xc] != 0x2047474f)) {
        fdwSound = 5;
        hmod = (HMODULE)0x0;
        pszSound = (LPCSTR)(**(code **)(*param_2 + 4))();
        PlaySoundA(pszSound,hmod,fdwSound);
      }
      local_10 = 0;
    }
  }
  else {
    local_10 = 0;
  }
  return local_10;
}

