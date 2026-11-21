// FUN_00548d90  00548d90

uint __thiscall FUN_00548d90(uint param_1,undefined1 *param_2)

{
  char cVar1;
  uint uVar2;
  undefined2 extraout_var;
  
  *param_2 = 0;
  if (*(char *)(param_1 + 0x26) == '\0') {
    uVar2 = FUN_00548f80(1);
    if ((int)uVar2 < 3) {
      uVar2 = FUN_00548f80(2);
      if ((int)uVar2 < 3) {
        uVar2 = FUN_00548f80(0);
        if (uVar2 == 2) {
          cVar1 = FUN_00548eb0();
          if (cVar1 == '\0') {
            uVar2 = FUN_00641280(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 0x2a)));
            if (uVar2 == 0xe) {
              *(undefined1 *)(param_1 + 0x26) = 1;
              *param_2 = 1;
              uVar2 = param_1;
            }
            uVar2 = uVar2 & 0xffffff00;
          }
          else {
            uVar2 = FUN_00641280(*(undefined2 *)(param_1 + 0x2a));
            if (uVar2 == 0xe) {
              *(undefined1 *)(param_1 + 0x26) = 1;
              uVar2 = 1;
            }
            else {
              uVar2 = uVar2 & 0xffffff00;
            }
          }
        }
        else {
          uVar2 = uVar2 & 0xffffff00;
        }
      }
      else {
        uVar2 = uVar2 & 0xffffff00;
      }
    }
    else {
      uVar2 = uVar2 & 0xffffff00;
    }
  }
  else {
    uVar2 = (uint)param_2 & 0xffffff00;
  }
  return uVar2;
}

