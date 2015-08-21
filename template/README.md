# {{basename}}

{{#travis}}
[![Build Status](https://travis-ci.org/{{repository}}.svg)](https://travis-ci.org/{{repository}})
[![Coverage Status](https://coveralls.io/repos/{{repository}}/badge.svg?branch=master&service=github)](https://coveralls.io/github/{{repository}}?branch=master)
{{/travis}}

{{description}}

## Install

```bash
$ npm install {{basename}}
```

{{#tap}}
```bash
$ npm test
```
{{/tap}}

## Author

Evan Lucas

## License

MIT (See `LICENSE` for more info)
