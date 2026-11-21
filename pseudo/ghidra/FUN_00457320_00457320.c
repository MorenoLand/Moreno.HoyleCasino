// FUN_00457320  00457320

undefined4 __thiscall FUN_00457320(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_0044efd0(param_2);
  if ((*(char *)(param_1 + 0x2c6) == '\0') || (*(int *)(param_1 + 0x344) != 7)) {
    cVar1 = FUN_00457270();
    if (cVar1 == '\0') {
      if ((*(char *)(param_1 + 0x2c7) == '\0') || (*(int *)(param_1 + 0x344) != 7)) {
        iVar3 = FUN_0044f700(0xe);
        if (iVar3 == 5) {
          uVar2 = 0x1a;
        }
        else {
          cVar1 = FUN_00457200();
          if (cVar1 == '\0') {
            if ((*(char *)(param_1 + 0x2c6) == '\0') && (*(char *)(param_1 + 0x2c7) == '\0')) {
              if (*(char *)(param_1 + 0x2c9) == '\0') {
                if (((*(char *)(param_1 + 0x2ca) == '\0') || (*(char *)(param_1 + 0x2ce) == '\0'))
                   && (*(char *)(param_1 + 0x2cb) == '\0')) {
                  if (*(char *)(param_1 + 0x2c2) == '\0') {
                    if (*(char *)(param_1 + 0x2ca) == '\0') {
                      if (*(char *)(param_1 + 0x2c5) == '\0') {
                        if (*(char *)(param_1 + 0x2cc) == '\0') {
                          uVar2 = 0xffffffff;
                        }
                        else {
                          uVar2 = 3;
                        }
                      }
                      else {
                        uVar2 = 5;
                      }
                    }
                    else {
                      uVar2 = 4;
                    }
                  }
                  else {
                    uVar2 = 6;
                  }
                }
                else {
                  uVar2 = 0x14;
                }
              }
              else {
                uVar2 = 0x17;
              }
            }
            else {
              uVar2 = 0xc;
            }
          }
          else {
            uVar2 = 0x1f;
          }
        }
      }
      else {
        uVar2 = 0x1e;
      }
    }
    else {
      uVar2 = 0x1d;
    }
  }
  else {
    uVar2 = 0x1c;
  }
  return uVar2;
}

