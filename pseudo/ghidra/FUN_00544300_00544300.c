// FUN_00544300  00544300

void FUN_00544300(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined4 extraout_var;
  undefined4 uVar2;
  
  uVar1 = FUN_00549e80(param_1,param_2);
  uVar2 = extraout_var;
  if (param_1 == 1) {
    if (*(char *)(DAT_00793404 + 0x24) == '\0') {
      FUN_00546760(0xb5,0x22,0xc0,0x22);
    }
    else {
      FUN_00546760(0x49,0x3c,0x54,0x3c);
    }
  }
  FUN_005468e0(uVar1);
  FUN_005467b0(uVar2);
  return;
}

