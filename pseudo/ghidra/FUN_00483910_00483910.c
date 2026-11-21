// FUN_00483910  00483910

void FUN_00483910(int *param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 extraout_var;
  undefined4 uVar4;
  
  iVar3 = FUN_0047e390(param_2);
  if (iVar3 == 0) {
    (**(code **)(*param_1 + 0x1c))(0);
  }
  else {
    uVar4 = extraout_var;
    cVar1 = FUN_004817b0(*(undefined4 *)(iVar3 + 4));
    cVar2 = FUN_004c61b0(uVar4);
    if (cVar2 == '\0') {
      if (cVar1 == '\0') {
        FUN_004cd520(param_1);
      }
      else {
        FUN_004cd4e0(param_1);
      }
    }
    else {
      iVar3 = FUN_0047cce0();
      if (iVar3 == 0) {
        (**(code **)(*param_1 + 0x1c))(0);
      }
      else if (cVar1 == '\0') {
        FUN_004cd560(param_1);
      }
      else {
        FUN_004cd540(param_1);
      }
    }
  }
  return;
}

