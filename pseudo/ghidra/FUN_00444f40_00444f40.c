// FUN_00444f40  00444f40

void __fastcall FUN_00444f40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_40;
  int local_38 [6];
  int local_20;
  int local_1c;
  undefined4 local_18 [5];
  
  local_1c = 0;
  local_38[0] = 3;
  local_38[1] = 3;
  local_38[2] = 4;
  local_38[3] = 7;
  local_38[4] = 7;
  local_18[0] = 1;
  local_18[1] = 4;
  local_18[2] = 5;
  local_18[3] = 5;
  local_18[4] = 0xd;
  while (local_1c < 5) {
    iVar1 = FUN_0062fbf0(5);
    if (*(int *)(param_1 + 0x50 + iVar1 * 0x78) == 0) {
      iVar2 = FUN_0062fbf0(local_18[local_1c]);
      *(int *)(param_1 + 0x50 + iVar1 * 0x78) = iVar2 + local_38[local_1c];
      switch(*(undefined4 *)(param_1 + 0x50 + iVar1 * 0x78)) {
      case 3:
        *(undefined4 *)(param_1 + 0x58 + iVar1 * 0x78) = 2;
        break;
      case 4:
      case 5:
        iVar2 = FUN_0062fbf0(2);
        *(int *)(param_1 + 0x58 + iVar1 * 0x78) = iVar2 + 2;
        iVar2 = FUN_0062fbf0(2);
        *(int *)(param_1 + 0x60 + iVar1 * 0x78) = iVar2 + 2;
        if (*(int *)(param_1 + 0x60 + iVar1 * 0x78) == 3) {
          *(undefined4 *)(param_1 + 100 + iVar1 * 0x78) = 2;
        }
        break;
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
        iVar2 = *(int *)(param_1 + 0x50 + iVar1 * 0x78);
        iVar3 = FUN_0062fbf0(3);
        *(int *)(param_1 + 0x58 + iVar1 * 0x78) = (iVar2 + -2) - iVar3;
        if (*(int *)(param_1 + 0x58 + iVar1 * 0x78) != 2) {
          iVar2 = FUN_0062fbf0(*(undefined4 *)(param_1 + 0x58 + iVar1 * 0x78));
          iVar3 = FUN_0062fbf0(3);
          *(int *)(param_1 + 0x60 + iVar1 * 0x78) = iVar2 - iVar3;
          if (*(int *)(param_1 + 0x60 + iVar1 * 0x78) < 2) {
            *(undefined4 *)(param_1 + 0x60 + iVar1 * 0x78) = 2;
          }
        }
        break;
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
        iVar2 = *(int *)(param_1 + 0x50 + iVar1 * 0x78);
        iVar3 = FUN_0062fbf0(5);
        *(int *)(param_1 + 0x58 + iVar1 * 0x78) = (iVar2 + -2) - iVar3;
        if (*(int *)(param_1 + 0x58 + iVar1 * 0x78) != 2) {
          iVar2 = FUN_0062fbf0(*(undefined4 *)(param_1 + 0x58 + iVar1 * 0x78));
          iVar3 = FUN_0062fbf0(4);
          *(int *)(param_1 + 0x60 + iVar1 * 0x78) = iVar2 - iVar3;
          if (*(int *)(param_1 + 0x60 + iVar1 * 0x78) < 2) {
            *(undefined4 *)(param_1 + 0x60 + iVar1 * 0x78) = 2;
          }
        }
        break;
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
        iVar2 = *(int *)(param_1 + 0x50 + iVar1 * 0x78);
        iVar3 = FUN_0062fbf0(8);
        *(int *)(param_1 + 0x58 + iVar1 * 0x78) = (iVar2 + -2) - iVar3;
        if (*(int *)(param_1 + 0x58 + iVar1 * 0x78) != 2) {
          iVar2 = FUN_0062fbf0(*(undefined4 *)(param_1 + 0x58 + iVar1 * 0x78));
          iVar3 = FUN_0062fbf0(5);
          *(int *)(param_1 + 0x60 + iVar1 * 0x78) = iVar2 - iVar3;
          if (*(int *)(param_1 + 0x60 + iVar1 * 0x78) < 2) {
            *(undefined4 *)(param_1 + 0x60 + iVar1 * 0x78) = 2;
          }
        }
      }
      if (*(int *)(param_1 + 0x58 + iVar1 * 0x78) == 2) {
        *(undefined4 *)(param_1 + 0x60 + iVar1 * 0x78) = 3;
        *(undefined4 *)(param_1 + 100 + iVar1 * 0x78) = 2;
      }
      if ((*(int *)(param_1 + 0x60 + iVar1 * 0x78) == 2) &&
         (*(int *)(param_1 + 100 + iVar1 * 0x78) == 2)) {
        FUN_005e9f20("false","..\\Casino\\horseracingstate.cpp",0xda);
      }
      for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
        if (local_20 != iVar1) {
          for (local_40 = 0; local_40 < 3; local_40 = local_40 + 1) {
            if ((((*(int *)(param_1 + local_20 * 0x78 + 0x50 + local_40 * 8) <
                   *(int *)(param_1 + iVar1 * 0x78 + 0x50 + local_40 * 8)) &&
                 (*(int *)(param_1 + local_20 * 0x78 + 0x54 + local_40 * 8) == 1)) &&
                (*(int *)(param_1 + iVar1 * 0x78 + 0x54 + local_40 * 8) == 1)) && (local_40 != 2)) {
              if (((*(int *)(param_1 + iVar1 * 0x78 + 0x58 + local_40 * 8) <
                    *(int *)(param_1 + local_20 * 0x78 + 0x58 + local_40 * 8)) &&
                  (*(int *)(param_1 + iVar1 * 0x78 + 0x5c + local_40 * 8) == 1)) &&
                 (*(int *)(param_1 + local_20 * 0x78 + 0x5c + local_40 * 8) == 1)) {
                local_38[5] = *(undefined4 *)(param_1 + iVar1 * 0x78 + 0x58 + local_40 * 8);
                *(undefined4 *)(param_1 + iVar1 * 0x78 + 0x58 + local_40 * 8) =
                     *(undefined4 *)(param_1 + local_20 * 0x78 + 0x58 + local_40 * 8);
                *(int *)(param_1 + local_20 * 0x78 + 0x58 + local_40 * 8) = local_38[5];
              }
              else if (((*(int *)(param_1 + iVar1 * 0x78 + 0x58 + local_40 * 8) ==
                         *(int *)(param_1 + local_20 * 0x78 + 0x58 + local_40 * 8)) &&
                       (*(int *)(param_1 + iVar1 * 0x78 + 0x5c + local_40 * 8) == 1)) &&
                      ((*(int *)(param_1 + local_20 * 0x78 + 0x5c + local_40 * 8) == 1 &&
                       (2 < *(int *)(param_1 + local_20 * 0x78 + 0x58 + local_40 * 8))))) {
                if (*(int *)(param_1 + local_20 * 0x78 + 0x58 + local_40 * 8) == 3) {
                  *(int *)(param_1 + local_20 * 0x78 + 0x58 + local_40 * 8) =
                       *(int *)(param_1 + local_20 * 0x78 + 0x58 + local_40 * 8) + -1;
                }
                else {
                  iVar3 = local_20 * 0x78;
                  iVar2 = FUN_0062fbf0(3);
                  *(int *)(param_1 + local_20 * 0x78 + 0x58 + local_40 * 8) =
                       *(int *)(param_1 + iVar3 + 0x58 + local_40 * 8) - iVar2;
                }
              }
            }
          }
        }
      }
      local_1c = local_1c + 1;
    }
  }
  for (local_40 = 0; local_40 < 5; local_40 = local_40 + 1) {
    for (local_20 = 0; local_20 < 3; local_20 = local_20 + 1) {
      if ((*(int *)(param_1 + local_40 * 0x78 + 0x50 + local_20 * 8) ==
           *(int *)(param_1 + local_40 * 0x78 + 0x54 + local_20 * 8)) &&
         (*(int *)(param_1 + local_40 * 0x78 + 0x50 + local_20 * 8) != 1)) {
        *(undefined4 *)(param_1 + local_40 * 0x78 + 0x50 + local_20 * 8) = 1;
        *(undefined4 *)(param_1 + local_40 * 0x78 + 0x54 + local_20 * 8) = 1;
      }
    }
  }
  return;
}

