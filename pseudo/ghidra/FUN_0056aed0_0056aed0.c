// FUN_0056aed0  0056aed0

void __thiscall FUN_0056aed0(int param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int local_8;
  
  cVar1 = FUN_0056afb0(param_2);
  if (cVar1 == '\0') {
    FUN_005e9f20("IsValidHand(handNum)","..\\Casino\\vpmstate.cpp",0x4c6);
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    if (*(short *)(param_1 + 0xf6 + param_2 * 10 + local_8 * 2) == 0) {
      do {
        uVar2 = FUN_006436c0();
        cVar1 = FUN_0056ab30(param_2,CONCAT22(extraout_var,uVar2));
      } while (cVar1 != '\0');
      FUN_0056b460(param_2,local_8,CONCAT22(extraout_var_00,uVar2));
    }
  }
  cVar1 = FUN_0056afb0(param_2);
  if (cVar1 == '\0') {
    FUN_005e9f20("IsValidHand(handNum)","..\\Casino\\vpmstate.cpp",0x4d4);
  }
  return;
}

