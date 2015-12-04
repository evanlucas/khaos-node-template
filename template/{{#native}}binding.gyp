{
  "targets": [{
    "target_name": "{{basename}}",
    "include_dirs": [
      "<!(node -e \"require('nan')\")"
    ],
    "sources": [
      "src/binding.cc"
    ]
  }]
}
