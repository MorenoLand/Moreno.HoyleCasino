// FUN_004383c0  004383c0

uint __fastcall FUN_004383c0(int param_1)

{
  char cVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0xac4) == 0) && (uVar2 = FUN_00434410(), (uVar2 & 0xff) == 0)) {
    return uVar2 & 0xffffff00;
  }
  cVar1 = FUN_00436a00(0x2b);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 4)) {
    return 1;
  }
  cVar1 = FUN_00436a00(0x2c);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 5)) {
    return 1;
  }
  cVar1 = FUN_00436a00(0x2d);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 6)) {
    return 1;
  }
  cVar1 = FUN_00436a00(0x2e);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 8)) {
    return 1;
  }
  cVar1 = FUN_00436a00(0x2f);
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 9)) {
    return 1;
  }
  uVar2 = FUN_00436a00(0x30);
  if (((uVar2 & 0xff) != 0) &&
     (uVar2 = 0, *(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 10)) {
    return 1;
  }
  return uVar2 & 0xffffff00;
}

