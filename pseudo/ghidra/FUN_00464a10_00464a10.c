// FUN_00464a10  00464a10

undefined4 __thiscall FUN_00464a10(short *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*param_1 == -1) {
    FUN_005e9f20("usSpades != 0xFFFFu","..\\Casino\\PokerCardBag.cpp",99);
  }
  if (*param_1 == 0) {
    if (param_1[1] == 0) {
      if (param_1[2] == 0) {
        if (param_1[3] == 0) {
          if ((char)param_1[4] == '\0') {
            if (*(char *)((int)param_1 + 9) == '\0') {
              uVar1 = 0;
            }
            else {
              FUN_00464220(DAT_0079077c,DAT_00790780);
              *(char *)((int)param_1 + 9) = *(char *)((int)param_1 + 9) + -1;
              uVar1 = 1;
            }
          }
          else {
            FUN_00464220(DAT_007907b4,DAT_00790784);
            *(char *)(param_1 + 4) = (char)param_1[4] + -1;
            uVar1 = 1;
          }
        }
        else {
          FUN_00464300(DAT_00790770);
          FUN_00464e10(param_1 + 3,param_2);
          uVar1 = 1;
        }
      }
      else {
        FUN_00464300(DAT_00790764);
        FUN_00464e10(param_1 + 2,param_2);
        uVar1 = 1;
      }
    }
    else {
      FUN_00464300(DAT_00790754);
      FUN_00464e10(param_1 + 1,param_2);
      uVar1 = 1;
    }
  }
  else {
    FUN_00464300(DAT_0079076c);
    FUN_00464e10(param_1,param_2);
    uVar1 = 1;
  }
  return uVar1;
}

