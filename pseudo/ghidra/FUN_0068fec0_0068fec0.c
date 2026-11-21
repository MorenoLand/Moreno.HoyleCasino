// FUN_0068fec0  0068fec0

bool __fastcall FUN_0068fec0(int param_1)

{
  int iVar1;
  
  iVar1 = EndDoc(*(HDC *)(param_1 + 0x18));
  DeleteDC(*(HDC *)(param_1 + 0x18));
  GlobalFree(*(HGLOBAL *)(param_1 + 0x10));
  GlobalFree(*(HGLOBAL *)(param_1 + 0x14));
  memset((void *)(param_1 + 8),0,0x42);
  if (0 >= iVar1) {
    FUN_0068fb10("EndDoc");
  }
  return 0 < iVar1;
}

