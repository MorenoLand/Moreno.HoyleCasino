// FUN_0068fb70  0068fb70

void __fastcall FUN_0068fb70(undefined4 *param_1)

{
  *param_1 = PrintJob::vftable;
  if (param_1[6] != 0) {
    AbortDoc((HDC)param_1[6]);
    DeleteDC((HDC)param_1[6]);
  }
  FUN_006252f0();
  return;
}

