// FUN_004607e0  004607e0

undefined4 __fastcall FUN_004607e0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_0045f990();
  if (cVar1 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0x110) + 1;
    if (4 < *(int *)(param_1 + 0x110)) {
      *(undefined4 *)(param_1 + 0x110) = 0;
    }
    uVar2 = FUN_00460700();
  }
  return uVar2;
}

