// FUN_0068fe80  0068fe80

bool __fastcall FUN_0068fe80(int param_1)

{
  int iVar1;
  
  iVar1 = EndPage(*(HDC *)(param_1 + 0x18));
  if (0 >= iVar1) {
    FUN_0068fb10("EndPage");
  }
  return 0 < iVar1;
}

