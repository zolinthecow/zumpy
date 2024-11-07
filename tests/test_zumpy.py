import pytest
from zumpy import compute

def test_compute_something():
    result = compute(2.0, 3.0)
    assert result == 5.0
